<!--//Group Members: Kevin Davies, Colin Brown, Bob Handler, Melissa Flores, Rodrigo Luzuriaga
//Project Name: Final
//Date: 05/27/2015
//Project Description: -->
<?php

//load functions
require_once("paper_fns.php");
require_once("login_fns.php");

// Check login code
if ($login->isUserLoggedIn() == true) {
    // if the user is logged in, display products to order
    // this needs to be edited to put in the shopping cart
    include("show_items.php");
} else {
    // if the user is not logged in, show product display.
    include("views/products_display.php");
}
?>
