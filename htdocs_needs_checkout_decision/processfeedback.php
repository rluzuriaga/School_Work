<!--//Group Members: Kevin Davies, Colin Brown, Bob Handler, Melissa Flores, Rodrigo Luzuriaga
//Project Name: Final
//Date: 05/27/2015
//Project Description: -->

<!--Insert Header -->
<?php
require('header.php');
?>
<html>
<head>
<link rel="stylesheet" href="main.css" type="text/css"  />
</head>

<?php

//create short variable names
$name = trim($_POST['name']);
$email = trim($_POST['email']);
$feedback = trim($_POST['feedback']);
$DOCUMENT_ROOT = $_SERVER['DOCUMENT_ROOT'];

//set up some static information
$toaddress = "feedback@example.com";

$subject = "Feedback from web site";

$mailcontent = "Customer name: ".$name."\n".
			   "Customer email: ".$email."\n".
               "Customer comments:\n".$feedback."\n";

$fromaddress = "From: webserver@example.com";

//output string
$outputstring = $name."\t".$email." email\t".$feedback." Feedback\t";


// open file for appending
$fp = @fopen("$DOCUMENT_ROOT/feedback/feedback.txt", 'ab');


fwrite($fp, $outputstring, strlen($outputstring));
flock($fp, LOCK_UN);
fclose($fp);
echo "<p>Feedback Processed, Please click Home to Continue</p>";
?>
<!-- Insert Footer -->
<?php
require('footer.php');
?>