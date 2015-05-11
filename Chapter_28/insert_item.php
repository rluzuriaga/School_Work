<?php

// include function files for this application
require_once('fns.php');
session_start();

do_html_header("Adding an item");
if (check_admin_user()) {
  if (filled_out($_POST)) {
    $isbn = $_POST['isbn'];
    $title = $_POST['title'];
    $author = $_POST['author'];
    $catid = $_POST['catid'];
    $price = $_POST['price'];
    $description = $_POST['description'];

    if(insert_item($isbn, $title, $author, $catid, $price, $description)) {
      echo "<p>Item <em>".stripslashes($title)."</em> was added to the database.</p>";
    } else {
      echo "<p>Item <em>".stripslashes($title)."</em> could not be added to the database.</p>";
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
