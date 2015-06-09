<!--//Group Members: Kevin Davies, Colin Brown, Bob Handler, Melissa Flores, Rodrigo Luzuriaga
//Project Name: Final
//Date: 05/27/2015
//Project Description: -->
<html>
<head>
  <title>Dunder Mifflin Paper Products</title>
<!-- Define Style in document -->  
<style type="text/css">
body {
	margin: 0px;
	color: Black;
	font-family: Verdana, Geneva, Arial, Helvetica, sans-serif;
	background: #FFFFFF;
	}
	
    h1 {color:white; font-size:24pt; text-align:center;
        font-family:arial,sans-serif}
    .menu {color:#81DAF5; font-size:12pt; text-align:center;
           font-family:calibri,sans-serif; font-weight:bold}
    p {color:black; font-size:12pt; text-align:justify;
       font-family:calibri,sans-serif}
    p.foot {color:white; font-size:9pt; text-align:center;
            font-family:calibri,sans-serif; font-weight:bold}
    a:link,a:visited,a:active {color:#00BFFF}
  </style>
</head>
<body>
  <!-- page header -->
  <table width="100%" cellpadding="12" cellspacing="0" border="0">
  <tr bgcolor="#15384E">
    <td align="center"><img src="images/letterhead.jpg" height="164" width="650"></td>  
      <!-- Label and link to logout.php or show_cart -->
      <td width="25%" href="order.php">
      <a href="show_cart.php">
      <img src="images/cart.png" height="64" width="64"  />
      <span class="menu">Shopping Cart</span></a></td>
     </tr>
  </table>
  <!-- menu -->
<!-- Label and link to Home -->
  <table width="100%" bgcolor="#CEECF5" cellpadding="4" cellspacing="4">
  <tr bgcolor="#15384E">
    <td width="25%" href="home.php" style="cursor:pointer">
      <a href="home.php">
      <img src="images/home.png" alt="" height="32" width="32" />
      <span class="menu">Home</span></a></td>     
<!-- Label and link to Products_state //-->
    <td width="25%" href="products_state.php" style="cursor:pointer">
      <a href="product_state.php">
      <img src="images/product.png" alt="" height="32" width="32" />
      <span class="menu">Products</span></a></td> 
<!-- Contact -->
    <td style="cursor:pointer">
    <a href="contact.php">
      <img src="images/contact.png" alt="" height="32" width="32" />
      <span class="menu">Contact</span></td>
<!-- Label and link to login.php -->
    <td width="25%" href="login.php" style="cursor:pointer">
      <a href="login.php">
      <img src="images/login.png" alt="" height="32" width="32" />
      <span class="menu">Login</span></a></td>
  </tr>
  </table>

