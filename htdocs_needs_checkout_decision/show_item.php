<?php
  require('header.php');
  include ('paper_fns.php');
  // The shopping cart needs sessions, so start one
  session_start();

  $item_num = $_GET['item_num'];

  // get this item out of database
  $item = get_item_details($item_num);
  do_html_heading($item['name']);
  display_item_details($item);

  // set url for "continue button"
  $target = "show_items.php";

  display_button("show_cart.php?new=".$item_num, "add-to-cart",
                 "Add".$item['name']." To My Shopping Cart");
  display_button($target, "continue-shopping", "Continue Shopping");

  require('footer.php');
?>
