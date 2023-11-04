<?php
  include("component/session.php");
  include("database/db_con.php");
  include("component/Admin_countblock.php");
  include("component/Admin_Authentication.php");
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
    </style>
  </head>
  <body>
    <div class="container-scroller">
      <!-- link: navbar.html -->
       <?php include("component/Admin_navbar.php"); ?>
      <div class="container-fluid page-body-wrapper">
        <!-- link: sidebar.html -->
       <?php include("component/Admin_sidebar.html"); ?>
       <!-- content area -->
        <div class="main-panel">
          <div class="content-wrapper">
          <!------------------content statrts------------------------->

            
           <div class="cutomrow"><center>
            
                            
            <!-- content area-->
             <br> <br>

            <div class="row">
              <div class="col-md-4 stretch-card grid-margin">
                <div class="card bg-gradient-success card-img-holder text-white">
                  <div class="card-body">
                    <img src="assets/images/dashboard/circle.svg" class="card-img-absolute" alt="circle-image" />
                    <h4 class="font-weight-normal mb-3"> TOTAL USERS <i class="mdi mdi-account mdi-24px float-right"></i></h4>
                    <h2 class="mb-5"> <?php echo $TOTAL_USERS[0];?></h2>
                  </div>
                </div>
              </div>

              <div class="col-md-4 stretch-card grid-margin">
                <div class="card bg-gradient-info card-img-holder text-white">
                  <div class="card-body">
                    <img src="assets/images/dashboard/circle.svg" class="card-img-absolute" alt="circle-image" />
                    <h4 class="font-weight-normal mb-3">BROKAREGE EARNING <i class="mdi mdi-currency-inr mdi-24px float-right"></i></h4>
                    <h2 class="mb-5"> <i class="mdi mdi-currency-inr mdi-24px float-right "></i><?php echo round($TOTAL_BROKERAGE[0],2); ?></h2>
                  </div>
                </div>
              </div>

              <div class="col-md-4 stretch-card grid-margin">
                <div class="card bg-gradient-danger card-img-holder text-white">
                  <div class="card-body">
                    <img src="assets/images/dashboard/circle.svg" class="card-img-absolute" alt="circle-image" />
                    <h4 class="font-weight-normal mb-3">LISTED STOCKS <i class="mdi mdi-currency-inr mdi-24px float-right"></i></h4>
                    <h2 class="mb-5"> </i><?php echo $TOTAL_STOCKS[0]; ?></h2>
                  </div>
                  </div>
                </div>
              </div>
            </div>
             <!---------END---------->

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