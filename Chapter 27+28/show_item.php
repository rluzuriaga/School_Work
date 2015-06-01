<?php
  include ('paper_fns.php');
  // The shopping cart needs sessions, so start one
  session_start();

  $item_num = $_GET['item_num'];

  // get this item out of database
  $item = get_item_details($item_num);
  do_html_header($item['name']);
  display_item_details($item);

  display_button("show_cart.php?new=".$item_num, "add-to-cart",
                   "Add".$item['name']." To My Shopping Cart");
  display_button("show_items.php", "continue-shopping", "Continue Shopping");

  do_html_footer();
?>
