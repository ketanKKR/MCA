<?php 
  include("database/db_con.php");


  $total_stocks_quantity = mysqli_fetch_row(mysqli_query($conn,"SELECT sum(qtt) FROM ".$_SESSION['userdb'].";"));
  $total_stocks = mysqli_fetch_row(mysqli_query($conn,"SELECT count(name) FROM ".$_SESSION['userdb'].";"));
  $total_stocks_value = mysqli_query($conn,"SELECT MY.amt,MY.qtt,ST.value FROM ".$_SESSION['userdb']." MY,stocks ST WHERE MY.id=ST.id;");

  $sum = 0;
  $sum1 = 0;
  
  while($total = mysqli_fetch_assoc($total_stocks_value)){
    $sum1 += ($total['amt']*$total['qtt']);
    $sum += ($total['value']*$total['qtt']);

  }
  $dif = $sum - $sum1;

  if($dif >= 0){
    $font_color = "white";
    $title = "PROFIT";
  }
  else{
    $font_color = "#d40000";
    $title = "LOSS";
  }

  $balance = mysqli_fetch_row(mysqli_query($conn, "SELECT BALANCE FROM user WHERE id=".$_SESSION['id'].";"));
?>