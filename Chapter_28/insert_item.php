<?php

// include function files for this application
require_once('paper_fns.php');
session_start();

do_html_header("Adding an item");
if (check_admin_user()) {
  if (filled_out($_POST)) {
    $name = $_POST['name'];
    $description = $_POST['description'];
    $catid = $_POST['catid'];
    $price = $_POST['price'];

    if(insert_item($name, $description, $catid, $price)) {
      echo "<p>Item <em>".stripslashes($name)."</em> was added to the database.</p>";
    } else {
      echo "<p>Item <em>".stripslashes($name)."</em> could not be added to the database.</p>";
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
