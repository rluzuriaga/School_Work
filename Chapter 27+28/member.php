<?php

// include function files for this application
require_once('paper_fns.php');
session_start();

//create short variable names
$username = $_POST['userid'];
$password = $_POST['password'];

if ($username && $password) {
// they have just tried logging in
  try  {
    login($username, $password);
    // if they are in the database register the user id
    $_SESSION['valid_user'] = $username;
  }
  catch(Exception $e)  {
    // unsuccessful login
    do_html_header('Problem:');
    echo 'You could not be logged in.
          You must be logged in to view this page.';
    do_html_url('login.php', 'Login');
    do_html_footer();
    exit;
  }
}

check_valid_user();

do_html_footer();
?>
