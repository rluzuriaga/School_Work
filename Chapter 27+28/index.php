<?php
  include ('paper_fns.php');
  // The shopping cart needs sessions, so start one
  session_start();
  do_html_header("Welcome to Dunder Mifflin");

  echo "<p>Please choose a category:</p>";

  // get categories out of database
  $cat_array = get_categories();

  // display as links to cat pages
  display_categories($cat_array);

  do_html_footer();
?>
