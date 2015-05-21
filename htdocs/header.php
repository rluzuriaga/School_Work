<html>
<head>


<!-- code to make the simpleCart.js work
Has to be put in the <head> of the code! -->
<?php
  require('script.php');
?>


  <title>Dunder Mifflin Paper Products</title>
<!-- Define Style in document -->  
<style type="text/css">
    h1 {color:white; font-size:24pt; text-align:center;
        font-family:arial,sans-serif}
    .menu {color:white; font-size:12pt; text-align:center;
           font-family:arial,sans-serif; font-weight:bold}
    p {color:black; font-size:12pt; text-align:justify;
       font-family:arial,sans-serif}
    p.foot {color:white; font-size:9pt; text-align:center;
            font-family:arial,sans-serif; font-weight:bold}
    a:link,a:visited,a:active {color:white}
  </style>
</head>
<body>

  <!-- page header -->
  <table width="100%" cellpadding="12" cellspacing="0" border="0">
  <tr bgcolor="#15384E">
    <td align="left"><img src="pictures/logo.jpg" alt="TLA logo" height="70" width="70"></td>
    <td>
        <h1>Dunder Mifflin Paper Products</h1>
    </td>
    <td align="right"><img src="pictures/logo.jpg" alt="TLA logo" height="70" width="70" /></td>
  </tr>
  </table>

  <!-- menu -->

<!-- Label and link to Home -->
  <table width="100%" bgcolor="white" cellpadding="4" cellspacing="4">
  <tr bgcolor="#15384E">
    <td width="25%" href="home.php" style="cursor:pointer">
      <a href="home.php">
      <img src="pictures/s-logo.png" alt="" height="25" width="25" />
      <span class="menu">Home</span></a></td>

<!-- Label and link to Products -->
    <td width="25%" href="products.php" style="cursor:pointer">
      <a href="products.php">
      <img src="pictures/s-logo.png" alt="" height="25" width="25" />
      <span class="menu">Products</span></a></td>

<!-- Label and link to Orderform.html 
    <td width="25%" href="orderform.php" style="cursor:pointer">
      <a href="orderform.php">
      <img src="pictures/s-logo.png" alt="" height="25" width="25" />
      <span class="menu">Order</span></a></td> -->


    <td width="25%" href="cart.php" style="cursor:pointer">
      <a href="cart.php">
      <img src="pictures/cart_small.png" alt="" height="25" width="25" />
      <span class="menu">Cart</span></a></td>


	<td width="25%" href="login.php" style="cursor:pointer">
      <a href="login.php">
      <img src="pictures/s-logo.png" alt="" height="25" width="25" />
      <span class="menu">Login</span></a></td>


  </tr>
  </table>

