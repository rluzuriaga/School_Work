<!--Insert Header -->
<?php
	require('header.php');
?>
<bgcolor="#DAD8D8">
<form action="processorder.php" method="post">
<table border="0">
<tr bgcolor="#DAD8D8">
  <td width="150">Item</td>
  <td width="15">Quantity</td>
</tr>
<tr>
  <td>Copy Paper</td>
  <td align="center"><input type="text" name="CopyPqty" size="3"
     maxlength="3" /></td>
</tr>
<tr>
  <td>Yellow Paper</td>
  <td align="center"><input type="text" name="YellowPqty" size="3" 
     maxlength="3" /></td>
</tr>
<tr>
  <td>Sticky Squares</td>
  <td align="center"><input type="text" name="StickSqty" size="3"
     maxlength="3" /></td>
</tr>
<tr>
  <td>Fine-Tip Markers</td>
  <td align="center"><input type="text" name="Markerqty" size="3"
     maxlength="3" /></td>
</tr>
<tr>
  <td>Storage Boxes</td>
  <td align="center"><input type="text" name="Boxqty" size="3"
     maxlength="3" /></td>
</tr>
<tr>
  <td>Shipping Address</td>
  <td align="center"><input type="text" name="address" size="40" maxlength="40"/></td>
</tr>
<tr>
  <td>How did you find Dunder Mifflin?</td>
  <td><select name="find">
        <option value = "a">Email</option>
        <option value = "b">Internet Advertisement</option>
        <option value = "c">Newspaper/Magazine Ad</option>
        <option value = "d">Repeat Customer</option>
      </select>
  </td>
</tr>
<tr>
  <td colspan="2" align="center"><input type="submit" value="Submit Order" /></td>
</tr>
</table>
</form>
</bgcolor>
<?php
  require('footer.php');
?>
</html>



