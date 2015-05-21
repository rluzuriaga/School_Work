<!--Insert Header -->
<?php
	require('header.php');
?>
<bgcolor="#DAD8D8">
<form action="processorder.php" method="post">
<table border="0">
<tr bgcolor="#DAD8D8">
  <td width="60">Item</td>
  <td width="75">Description</td>
  <td width="15">Price</td>
  <td width="15">Quantity</td>
</tr>
<tr>
  <td><img src= "pictures/CopyP.jpg" alt= "copy_paper" width= 32 height= 32 align=left/>Copy Paper</td>
<!--  <td>Copy Paper</td> //-->
  <td>20-lb 500 sheets per ream; 10 reams per carton</td>
  <td>$50</td>
  <td align="center"><input type="text" name="CopyPqty" size="3"
     maxlength="3" /></td>
</tr>
<tr>
  <td><img src= "pictures/YellowP.jpg" alt= "yellow_paper" width= 32 height= 32 align=left/>Yellow Paper</td>
<!--  <td>Yellow Paper</td> //-->
  <td>Perforated college-ruled sheets 12 pads per pack</td>
  <td>$8</td>
  <td align="center"><input type="text" name="YellowPqty" size="3" 
     maxlength="3" /></td>
</tr>
<tr>
 <td><img src= "pictures/StickS.jpg" alt= "sticky_paper" width= 32 height= 32 align=left/>Sticky Squares</td>
<!--  <td>Sticky Squares</td> //-->
   <td>3" x 3" , 100 sheets per pad</td>
   <td>$3</td>
  <td align="center"><input type="text" name="StickSqty" size="3"
     maxlength="3" /></td>
</tr>
<tr>
  <td><img src= "pictures/Markers.jpg" alt= "markers" width= 32 height= 32 align=left/>Markers</td>
<!--  <td>Fine-Tip Markers</td> //-->
  <td>1.0 mm Tip for Fine BOLD Marking Pack of 12, Black Sharpie Markers</td>
   <td>$2</td>
  <td align="center"><input type="text" name="Markerqty" size="3"
     maxlength="3" /></td>
</tr>
<tr>
  <td><img src= "pictures/Boxes.jpg" alt= "storage_box" width= 32 height= 32 align=left/>Boxes</td>
<!--  <td>Storage Boxes</td> //-->
   <td>350lb. stacking weight, Holds letter/legal-size files</td>
    <td>$1</td>
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
