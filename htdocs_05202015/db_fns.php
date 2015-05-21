<?php

function db_connect() {
   $result = new mysqli('localhost', 'root', 'password', 'cisw31');
   if (!$result) {
     throw new Exception('Could not connect to database server');
   } else {
     return $result;
   }
}

?>
