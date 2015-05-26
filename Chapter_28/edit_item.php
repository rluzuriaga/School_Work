<?php

// include function files for this application
require_once('paper_fns.php');
session_start();

do_html_header("Updating item");
if (check_admin_user()) {
  if (filled_out($_POST)) {
    $olditem = $_POST['olditem'];
    $item_num = $_POST['item_num'];
    $name = $_POST['name'];
    $description = $_POST['description'];
    $catid = $_POST['catid'];
    $price = $_POST['price'];

    if(update_item($olditem, $item_num, $name, $description, $catid, $price)) {
      echo "<p>Item was updated.</p>";
    } else {
      echo "<p>Item could not be updated.</p>";
    }
  } else {
    echo "<p>You have not filled out the form.  Please try again.</p>";
  }
  do_html_url("admin.php", "Back to administration menu");
} else {
  echo "<p>You are not authorised to view this page.</p>";
}

do_html_footer();

?>
