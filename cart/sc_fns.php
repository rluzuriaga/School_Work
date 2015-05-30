<!--Replaced instances of 'isbn' with 'item_num'-->

<?php
function calculate_shipping_cost() {
  // as we are shipping products all over the world
  // via teleportation, shipping is fixed
  return 20.00;
}

function get_item_details($item_num) {
  // query database for all details for a particular item
  if ((!$item_num) || ($item_num=='')) {
     return false;
  }
  $conn = db_connect();
  $query = "select * from items where item_num='".$item_num."'";
  $result = @$conn->query($query);
  if (!$result) {
     return false;
  }
  $result = @$result->fetch_assoc();
  return $result;
}

function calculate_price($cart) {
  // sum total price for all items in shopping cart
  $price = 0.0;
  if(is_array($cart)) {
    $conn = db_connect();
    foreach($cart as $item_num => $qty) {
      $query = "select price from items where item_num='".$item_num."'";
      $result = $conn->query($query);
      if ($result) {
        $item = $result->fetch_object();
        $item_price = $item->price;
        $price +=$item_price*$qty;
      }
    }
  }
  return $price;
}

function calculate_items($cart) {
  // sum total items in shopping cart
  $items = 0;
  if(is_array($cart))   {
    foreach($cart as $item_num => $qty) {
      $items += $qty;
    }
  }
  return $items;
}
?>
