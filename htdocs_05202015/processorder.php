<?php
  // create short variable names
  $CopyPqty = $_POST['CopyPqty'];
  $YellowPqty = $_POST['YellowPqty'];
  $StickSqty = $_POST['StickSqty'];
  $Markerqty = $_POST['Markerqty'];
  $Boxqty = $_POST['Boxqty'];
  $DOCUMENT_ROOT = $_SERVER['DOCUMENT_ROOT'];
  $address = $_POST['address'];
  $date = date('H:i, jS F Y');
?>
<html>
<head>
  <title>Dunder Mifflin - Order Results</title>
</head>
<body>
<h1>Dunder Mifflin Paper Products</h1>
<h2>Order Results</h2>

<?php
//Information for each item
  echo '<p>Order processed at ';
  echo date('H:i, jS F');
  echo '</p>';
  echo '<p>Your order is as follows: </p>';
  echo $CopyPqty.' Copy Paper<br />';
  echo $YellowPqty.' Yellow Paper<br />';
  echo $StickSqty.' Sticky Squares<br />';
  echo $Markerqty.' Fine-Tip Markers<br />';
  echo $Boxqty.' Storage Boxes<br />';
  $totalqty = 0;
  $totalamount = 0.00;
//Calculate total
  $totalqty = 0;
  $totalqty = $CopyPqty + $YellowPqty + $StickSqty + $Markerqty + $Boxqty;
  echo 'Items ordered: '.$totalqty.'<br />';

  $totalamount = 0.00;
//Prices per item
  define('COPYPRICE', 50);
  define('YELLOWPRICE', 8);
  define('STICKYPRICE', 3);
  define('MARKERPRICE', 2);
  define('BOXPRICE', 1);

  $totalamount = $CopyPqty * COPYPRICE
               + $YellowPqty * YELLOWPRICE
               + $StickSqty * STICKYPRICE
	       + $Boxqty * BOXPRICE
	       + $Markerqty * MARKERPRICE;

  echo 'Subtotal: $'.number_format($totalamount,2).'<br />';

  $taxrate = 0.10; 

// local sales tax is 10%
  $totalamount = $totalamount * (1 + $taxrate);
  echo 'Total including tax: $'.number_format($totalamount,2).'<br />';

//output string
$outputstring = $date."\t".$CopyPqty." CopyPaper\t".$YellowPqty." Yellow Paper\t".$StickSqty." Sticky Squares\t".$Markerqty." Fine-Tip Markers\t".$Boxqty." Storage Boxes\t\$".$totalamount."\t". $address."\n";

// open file for appending
$fp = @fopen("$DOCUMENT_ROOT/orders/orders.txt", 'ab');

flock($fp, LOCK_EX);

if (!$fp) {
echo "<p><strong> Your order could not be processed at this time.
Please try again later.</strong></p></body></html>";
exit;
}
fwrite($fp, $outputstring, strlen($outputstring));
flock($fp, LOCK_UN);
fclose($fp);

echo "<p>Order written.</p>";

?>
</body>
</html>

