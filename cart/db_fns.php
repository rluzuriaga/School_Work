<?php

function db_connect() {
   $result = new mysqli('localhost', 'dunder_mifflin', 'password', 'dunder_mifflin');
   if (!$result) {
      return false;
   }
   $result->autocommit(TRUE);
   return $result;
}

?>
