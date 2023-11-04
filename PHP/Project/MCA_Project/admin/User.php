<?php
  include("component/session.php");
  include("database/db_con.php");  
  include("component/countblock.php");
  $_SESSION['sql'] = 0;
?>

<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
    <title>Grow More</title>
    <link rel="stylesheet" href="assets/vendors/mdi/css/materialdesignicons.min.css">
    <link rel="stylesheet" href="assets/vendors/css/vendor.bundle.base.css">
    <link rel="stylesheet" href="assets/css/style.css">
    <link rel="shortcut icon" href="assets/main_icon.ico" />
    <link rel="stylesheet" type="text/css" href="mycss.css">
    <style>
      addbtn{text-decoration: none; padding:15px 10px; margin-top: -58px; margin-right: -32px; border-radius: 10px; background-color: #7d3c98; border-left: 1px solid  #7d3c98; float: right; border-bottom: 1px solid  #7d3c98;color: white;}
      .addbtn{float:right; text-decoration:none; color: #7d3c98; padding:2px 25px; margin-right: 10px ; margin-top: 10px;  background-color:#0000; border:1px solid #7d3c98; border-radius:3px;}
      .paybtn{float:right; margin-top: 10px; text-decoration:none; color: #7d3c98; padding:2px 25px;  margin-right:22px; background-color:#0000; border:1px solid #7d3c98; border-radius:3px;}
      .paybtn img{width: 17px; margin-right: 2px;}
      .addbtn img{width: 17px; margin-right: 2px;}
      .editlist img{width: 20px; float: right; margin-right: -25px; margin-top: -47px;}
      .editlist a{padding: 30px;}
      .d-1{width:46%; margin:2%; background-color: white; border-radius: 4px; padding: 20px;}
      
    </style>
  </head>
  <body>
    <div class="container-scroller">
      <!-- link: navbar.html -->
       <?php include("component/navbar.php"); ?>
      <div class="container-fluid page-body-wrapper">
        <!-- link: sidebar.html -->
       <?php include("component/sidebar.html"); ?>
       <!-- content area -->
        <div class="main-panel">
          <div class="content-wrapper">
<!-- -----------------------------------content area-------------------------------------------------->
      <div class="cutomrow">
        <center><div class="row">
              <div class="col-md-4 stretch-card grid-margin">
                <div class="card bg-gradient-success card-img-holder text-white">
                  <div class="card-body">
                    <img src="assets/images/dashboard/circle.svg" class="card-img-absolute" alt="circle-image" />
                    <h4 class="font-weight-normal mb-3"> TOTAL SHARE <i class="mdi mdi-chart-line mdi-24px float-right"></i></h4>
                    <h2 class="mb-5"> <?php echo $total_stocks_quantity[0];?></h2>
                    <h4 class="font-weight-normal mb-3"> TOTAL STOCK </h4>
                    <h2 class="mb-5"> <?php echo $total_stocks[0];?></h2>
                  </div>
                </div>
              </div>

              <div class="col-md-4 stretch-card grid-margin">
                <div class="card bg-gradient-info card-img-holder text-white">
                  <div class="card-body">
                    <img src="assets/images/dashboard/circle.svg" class="card-img-absolute" alt="circle-image" />
                    <h4 class="font-weight-normal mb-3">STOCKS VALUE <i class="mdi mdi-currency-inr mdi-24px float-right"></i></h4>
                    <h2 class="mb-5"> <i class="mdi mdi-currency-inr mdi-24px float-right "></i><?php echo $sum; ?></h2>
                    <!--<h4 class="card-text"><span style="font-weight: bolder;  padding: 5px; border-radius: 4px;">This Year</span></h4>-->
                    <h4 class="font-weight-normal mb-3"><?php echo $title ?> <i class="mdi mdi-currency-inr mdi-24px float-right"></i></h4>
                    <h2 class="mb-5" style="color: <?php echo $font_color ?>"> <?php echo round($dif,2); ?></h2>
                  </div>
                </div>
              </div>

              <div class="col-md-4 stretch-card grid-margin">
                <div class="card bg-gradient-danger card-img-holder text-white">
                  <div class="card-body">
                    <img src="assets/images/dashboard/circle.svg" class="card-img-absolute" alt="circle-image" />
                    <h4 class="font-weight-normal mb-3">BALANCE</h4>
                    <h2 class="mb-5"><i class="mdi mdi-currency-inr mdi-24px float-right"></i> <?php echo $balance[0]; ?></h2>
                    <button class="myBtn" style="width: 50%;" name="Withdraw" onclick="window.location.href='withdraw.php'">Withdraw<img src="assets\images\ui\withdraw.png" style="width: 30px; padding-left: 10px; "></button><br><br><br>

                    <button class="myBtn" style="width: 50%;" name="Deposit" onclick="window.location.href='deposit.php'">Deposit<img src="assets\images\ui\deposit.png" style="width: 30px; padding-left: 10px; padding-top: 5px;"></button>
                  </div>
                </div>
              </div>
            </div></center>
              


<!-- ----------------------------------- end content area-------------------------------------------------->
          </div>
          <!-- link: footer.html -->  
          <?php include("component/footer.php"); ?>
          <!-- partial -->
        </div>
        <!-- main-panel ends -->
      </div>
      <!-- page-body-wrapper ends -->
    </div>
   <?php include("component/js.html"); ?> 
   
  </body>
</html>