<!--Insert Header -->
<?php
//Group Members: Kevin Davies, Colin Brown, Bob Handler, Melissa Flores, Rodrigo Luzuriaga
//Project Name: Final
//Date: 05/27/2015
//Project Description:
require('header.php');
?>
<html>
<!-- Begin Feedback -->
<body>

<h1>Customer Feedback</h1>
<p>Please tell us what you think.</p>

<form action="processfeedback.php" method="post">

<p>Your name:<br/>
<input type="text" name="name" size="40" /></p>
     
<p>Your email address:<br/>
<input type="text" name="email" size="40" /></p>
     
<p>Your feedback:<br/>
<textarea name="feedback" rows="8" cols="40" wrap="virtual" /></textarea></p>
     
<p><input type="submit" value="Send feedback" /></p>

</form>
</body>
<!-- Insert Footer -->
<?php
require('footer.php');
?>
