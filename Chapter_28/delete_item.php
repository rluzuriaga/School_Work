<?php

// include function files for this application
require_once('paper_fns.php');
session_start();

do_html_header("Deleting item");
if (check_admin_user()) {
  if (isset($_POST['isbn'])) {
    $isbn = $_POST['isbn'];
    if(delete_item($isbn)) {
      echo "<p>Item ".$isbn." was deleted.</p>";
    } else {
      echo "<p>Item ".$isbn." could not be deleted.</p>";
    }
  } else {
    echo "<p>We need an ISBN to delete a item.  Please try again.</p>";
  }
  do_html_url("admin.php", "Back to administration menu");
} else {
  echo "<p>You are not authorised to view this page.</p>";
}

do_html_footer();

?>
