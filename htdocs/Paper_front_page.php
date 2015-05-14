<?php
  $pictures = array('pictures/Boxes.jpg', 'pictures/CopyP.jpg', 'pictures/Markers.jpg',
                    'pictures/YellowP.jpg', 'pictures/StickS.jpg',
                    );

  shuffle($pictures);
?>
<html>
<head>
  <title>Dunder Mifflin </title>
</head>
<body>

<h1>Dunder Mifflin Paper Products</h1>
<div align="center">
<table width = 100%>
<tr>

<?php
  for ($i = 0; $i < 3; $i++) {
    echo "<td align=\"center\"><img src=\"";
    echo $pictures[$i];
    echo "\"/></td>";
  }
?>
</tr>
</table>
</div>
</body>
</html>
