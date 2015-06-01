<!--//Group Members: Kevin Davies, Colin Brown, Bob Handler, Melissa Flores, Rodrigo Luzuriaga
//Project Name: Final
//Date: 05/27/2015
//Project Description: -->
<?php
//modified by Melissa Flores
//this file will be the container for all functions

//this checks for php version
if (version_compare(PHP_VERSION, '5.3.7', '<')) {
    exit("Sorry, Simple PHP Login does not run on a PHP version smaller than 5.3.7 !");
} else if (version_compare(PHP_VERSION, '5.5.0', '<')) {
// (this library adds the PHP 5.5 password hashing functions to older versions of PHP)
    require_once("passwordhash_fns.php");
}

//functions for login
require_once("Login_process.php");
require_once("db.php");
require_once("Registration_process.php");
require_once("output_fns.php");
require_once("sc_fns.php");
require_once("order_fns.php");
require_once("db_fns.php");
?>
