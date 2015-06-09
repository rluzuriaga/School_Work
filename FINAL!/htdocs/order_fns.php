<?php
//removing country field/array as it is not needed and not part of the database -melissa
//replaced userid to user_id to sync with what we have in the database -melissa

function filled_out($form_vars) {
  // test that each variable has a value
  foreach ($form_vars as $key => $value) {
     if ((!isset($key)) || ($value == '')) {
        return false;
     }
  }
  return true;
}

function process_card($card_details) {
  // connect to payment gateway or
  // use gpg to encrypt and mail or
  // store in DB if you really want to

  return true;
}

function insert_order($order_details) {
  // extract order_details out as variables
  extract($order_details);

  // set shipping address same as address
  if((!$ship_name) && (!$ship_address) && (!$ship_city) && (!$ship_state) && (!$ship_zip)) {
    $ship_name = $CO_name;
    $ship_address = $address;
    $ship_city = $city;
    $ship_state = $state;
    $ship_zip = $zip;
  }

  $conn = db_connect();

  // we want to insert the order as a transaction
  // start one by turning off autocommit
  $conn->autocommit(FALSE);

  // insert customer address
  $query = "select user_id from users where
            user_name = '".$_SESSION['user_name']."' and checkout_name = '".$CO_name."' and address = '".$address."'
            and city = '".$city."' and state = '".$state."'
            and zip = '".$zip."'";


  $result = $conn->query($query);

    if($result->num_rows>0) {
      $customer = $result->fetch_object();
      $user_id = $customer->user_id;
    } else {
//    $query = "insert into users  
//	      values 
  //           ('','','".$name."','','".$address."','".$city."','".$state."','".$zip."')";


	$query = "update users
		set checkout_name = '".$CO_name."', address = '".$address."' , city = '".$city."' , 
			state = '".$state."' , zip = '".$zip."'
		where user_name = '".$_SESSION['user_name']."' ";

 $result = $conn->query($query);

    if (!$result) {
		echo "insert 1 failed";
       return false;
    }
    }
echo "insert 1 passed";
  $user_id = $conn->insert_id;

  $date = date("Y-m-d");

  $query = "insert into orders 
            values
            ('', '".$user_id."', '".$_SESSION['total_price']."', '".$date."', 'PARTIAL',
             '".$ship_name."', '".$ship_address."', '".$ship_city."', '".$ship_state."',
             '".$ship_zip."')";

  $result = $conn->query($query);
  if (!$result) {
	  echo " insert 2 failed";
    return false;
  }
echo " insert 2 passed";
  $query = "select orderid from orders where

               amount > (".$_SESSION['total_price']."-.001) and
               amount < (".$_SESSION['total_price']."+.001) and
               date = '".$date."' and
               order_status = 'PARTIAL' and
               ship_name = '".$ship_name."' and
               ship_address = '".$ship_address."' and
               ship_city = '".$ship_city."' and
               ship_state = '".$ship_state."' and
               ship_zip = '".$ship_zip."'"; 

  $result = $conn->query($query);

  if($result->num_rows>0) {
    $order = $result->fetch_object();
    $orderid = $order->orderid;
  } else {
	  echo " query 1 failed";
    return false;
  }
echo " query 1 passed";
  // insert each item
  foreach($_SESSION['cart'] as $item_num => $quantity) {
    $detail = get_item_details($item_num);
    $query = "delete from order_items where
              orderid = '".$orderid."' and item_num = '".$item_num."'";
    $result = $conn->query($query);
    $query = "insert into order_items values
              ('".$item_num."', '".$orderid."', ".$detail['price'].", ".$quantity.")";
    $result = $conn->query($query);
    if(!$result) {
		echo " delete/insert loop failed";
      return false;
    }
  }
echo " delete/insert loop passed";
  // end transaction
  $conn->commit();
  $conn->autocommit(TRUE);

  return $orderid;
}

?>
