<?php
  include ('paper_fns.php');
  // The shopping cart needs sessions, so start one
  session_start();

  $catid = $_GET['catid'];
  $name = get_category_name($catid);

  do_html_header($name);

  // get the item info out from db
  $item_array = get_items($catid);

  display_items($item_array);

  display_button("index.php", "continue-shopping", "Continue Shopping");

  do_html_footer();
?>
