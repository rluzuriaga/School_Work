<?php
  require ('header.php');

  include ('paper_fns.php');
  // The shopping cart needs sessions, so start one
  session_start();

  // get the item info out from db
  $item_array = get_items();

  display_items($item_array);

  display_button("index.php", "continue-shopping", "Continue Shopping");
  
  require ('footer.php');
?>
