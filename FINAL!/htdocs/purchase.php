<?php
//removing Country field/entry as this is not needed -melissa

  require('header.php');
  include ('paper_fns.php');
  // The shopping cart needs sessions, so start one
  session_start();

  do_html_heading("Checkout");

  // create short variable names
  $co_name = $_POST['CO_name'];
  $address = $_POST['address'];
  $city = $_POST['city'];
  $state = $_POST['state'];
  $zip = $_POST['zip'];

  // if filled out
  if (($_SESSION['cart']) && ($co_name) && ($address) && ($city) && ($state) &&($zip)) {
    // able to insert into database
    if(insert_order($_POST) != false ) {
      //display cart, not allowing changes and without pictures
      display_cart($_SESSION['cart'], false, 0);

      display_shipping(calculate_shipping_cost());

      //get credit card details
      display_card_form($co_name);

      display_button("show_cart.php", "continue-shopping", "Continue Shopping");
    } else {
      echo "<p>Could not store data, please try again.</p>";
      display_button('checkout.php', 'back', 'Back');
    }
  } else {
    echo "<p>You did not fill in all the fields, please try again.</p><hr />";
    display_button('checkout.php', 'back', 'Back');
  }

  require('footer.php');
?>
