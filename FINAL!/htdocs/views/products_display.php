<!--//Group Members: Kevin Davies, Colin Brown, Bob Handler, Melissa Flores, Rodrigo Luzuriaga
//Project Name: Final
//Date: 05/27/2015
//Project Description: -->

<!--Insert Header-->
<?php
  require('views/header.php');
?>

<!-- page content -->
<!-- Table linking every product -->
<!-- CSS Code -->
<style type="text/css" scoped>

table.Table {
width:100%;
background-color:#FFFFFF;
border-collapse:collapse;border-width:1px;
border-color:#FFFFFF;
border-style:solid;
color:#000000;
}

table.Table td, table.Table th {
border-width:1px;
border-color:#FFFFFF;
border-style:solid;
padding:3px;
}

table.Table thead {
background-color:#FFFFFF;
}

.boldtext {
font-family:Arial, sans-serif;font-size:2em;font-weight:bold;font-variant:small-caps;letter-spacing:0.2em;line-height:1.3em;text-align:center;color:#330099;;
}

</style>
<!-- HTML Code -->
<table class="Table">
<thead>
<tr>
<th>Product</th>
<th>Description</th>
<th>Price</th>
</tr>
</thead>
<tbody style="text-align: center;">
<tr bgcolor="white" >
    <td style="font-weight:900;"> <div class="boldtext"> <img alt="Copy Paper" src="images/CopyP.jpg" width="125" height="125"> 
    <br>Copy Paper<br></div></td>
    <td>20-lb 500 sheets per ream; 10 reams per carton</td>
    <td>$50</td>
  </tr>
  <tr bgcolor="white" >
    <td style="font-weight:900;"> <div class="boldtext"> <img alt="Yellow Paper" src="images/YellowP.jpg" width="125" height="125"> 
    <br>Yellow Paper<br></div></td>
    <td>Perforated college-ruled sheets 12 pads per pack</td>
    <td>$8</td>
  </tr>
  <tr bgcolor="white">
    <td style="font-weight:900;"> <div class="boldtext"> <img alt="StickySquares" src="images/StickS.jpg" width="125" height="125"> 
    <br>StickySquares<br></div></td>
    <td>3" x 3" , 100 sheets per pad</td>
    <td>$3</td>
  </tr>
  <tr bgcolor="white">
   <td style="font-weight:900;"> <div class="boldtext"> <img alt="Fine-Tip Markers" src="images/Markers.jpg" width="125" height="125"> 
    <br>Fine-Tip Markers<br></div>
    </td>
    <td>1.0 mm Tip for Fine BOLD Marking Pack of 12, Black Sharpie Markers</td>
    <td>$2</td>
  </tr>
  <tr bgcolor="white">
     <td style="font-weight:900;"> <div class="boldtext"> <img alt="Storage Boxes" src="images/Boxes.jpg" width="125" height="125"> 
    <br>Storage Boxes<br></div></td>
    <td>350lb. stacking weight, Holds letter/legal-size files</td>
    <td>$1</td>
    <td style="color:white;font-size:1000%">.....</td>
  </tr>
</tbody>
</table>
<!-- Insert Footer -->
<?php
  require('footer.php');
?>

