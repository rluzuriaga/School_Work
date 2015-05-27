<!--//Group Members: Kevin Davies, Colin Brown, Bob Handler, Melissa Flores, Rodrigo Luzuriaga
//Project Name: Final
//Date: 05/27/2015
//Project Description: -->
<!--Insert Header -->
<?php
  require('header.php');
?>


<?php

//load functions
require_once("paper_fns.php");

// create the registration object.
// this line handles the entire registration process.
$registration = new Registration();

// show the register view with the registration form
include("views/register.php");
?>
<!-- Insert Footer -->
<?php
  require('footer.php');
?>
