<?php
  include ('fns.php');
  // The shopping cart needs sessions, so start one
  session_start();

  $isbn = $_GET['isbn'];

  // get this item out of database
  $item = get_item_details($isbn);
  do_html_header($item['title']);
  display_item_details($item);

  // set url for "continue button"
  $target = "index.php";
  if($item['catid']) {
    $target = "show_cat.php?catid=".$item['catid'];
  }

  // if logged in as admin, show edit item links
  if(check_admin_user()) {
    display_button("edit_item_form.php?isbn=".$isbn, "edit-item", "Edit Item");
    display_button("admin.php", "admin-menu", "Admin Menu");
    display_button($target, "continue", "Continue");
  } else {
    display_button("show_cart.php?new=".$isbn, "add-to-cart",
                   "Add".$item['title']." To My Shopping Cart");
    display_button($target, "continue-shopping", "Continue Shopping");
  }

  do_html_footer();
?>
