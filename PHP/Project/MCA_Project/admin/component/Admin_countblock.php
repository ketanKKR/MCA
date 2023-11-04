<?php 
  include("database/db_con.php");


  $TOTAL_USERS = mysqli_fetch_row(mysqli_query($conn,"SELECT count(name) FROM user;"));
  $TOTAL_BROKERAGE = mysqli_fetch_row(mysqli_query($conn,"SELECT SUM(brokerage) FROM transaction;"));
  $TOTAL_STOCKS = mysqli_fetch_row(mysqli_query($conn,"SELECT count(id) FROM stocks;"));
?>