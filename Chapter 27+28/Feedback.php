<!--Insert Header -->
<?php
include('paper_fns.php');
do_html_header();
?>
<html>
<head>
<link rel="stylesheet" href="main.css" type="text/css"  />
</head>
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
do_html_footer();
?>
