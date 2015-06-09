<!--//Group Members: Kevin Davies, Colin Brown, Bob Handler, Melissa Flores, Rodrigo Luzuriaga
//Project Name: Final
//Date: 05/27/2015
//Project Description: -->
<!--Insert Header-->
<?php
  require('views/header.php');
?>

<?php
//load functions
require_once("paper_fns.php");

// create a login object. when this object is created, it will do all login/logout stuff automatically
$login = new Login();

// ... ask if we are logged in here:
if ($login->isUserLoggedIn() == true) {
    //  show the "you are logged in" view.
    include("views/logged_in.php");

} else {
    // show the "you are not logged in" view.
    include("views/not_logged_in.php");
}
?>

<!-- Insert Footer -->
<?php
  require('footer.php');
?>
