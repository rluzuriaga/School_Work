<?php

// include function files for this application
require_once('paper_fns.php');
session_start();

do_html_header("Deleting item");
if (check_admin_user()) {
  if (isset($_POST['item_num'])) {
    $item_num = $_POST['item_num'];
    if(delete_item($item_num)) {
      echo "<p>Item ".$item_num." was deleted.</p>";
    } else {
      echo "<p>Item ".$item_num." could not be deleted.</p>";
    }
  } else {
    echo "<p>We need an Item Number to delete a item.  Please try again.</p>";
  }
  do_html_url("admin.php", "Back to administration menu");
} else {
  echo "<p>You are not authorised to view this page.</p>";
}

do_html_footer();

?>
