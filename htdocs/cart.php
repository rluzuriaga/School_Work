<!--Insert Header-->
<?php
  require('header.php');
?>

<center>
<form action="sendcart.php" method="post"> 
<table width="400" border="0" cellspacing="2" cellpadding="0"> 
<tr> 
<td width="29%" class="bodytext">Family name:</td> 
<td width="71%"><input name="last_name" type="text" id="last_name" size="32"></td> 
</tr> 
<tr> 
<td width="29%" class="bodytext">Name:</td> 
<td width="71%"><input name="first_name" type="text" id="first_name" size="32"></td> 
</tr> 
<tr> 
<td class="bodytext">Email:</td> 
<td><input name="email" type="text" id="email" size="32"></td> 
</tr> 
<tr> 
<td class="bodytext">Comment:</td> 
<td><textarea name="comments" cols="45" rows="6" id="comments" class="bodytext"></textarea></td> 
</tr> 
<tr> 
<td class="bodytext">phone number:</td> 
<td><textarea name="phone" cols="45" id="phone" class="bodytext"></textarea></td> 
</tr> 
<tr>
<td class="bodytext">Address:</td> 
<td><textarea name="address" cols="45" id="address" class="bodytext"></textarea></td> 
</tr>
</table> 
</form>
</center>


<!-- Insert Footer -->
<?php
  require('footer.php');
?>
