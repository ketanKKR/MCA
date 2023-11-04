<?php
  include("component/session.php");
  include("database/db_con.php");
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
      .share_box{
        background-color: white;
        width: 95%;
        height: 210px;
        padding-top: 10px;
        border-radius: 7px; 
        box-shadow: rgba(0, 0, 0, .4) 0 2px 4px,rgba(0, 0, 0, .3) 0 7px 13px -3px,rgba(0, 0, 0, .5) 0 -3px 0 inset;
      }
      .share_name{
        color: black;
        display: inline;
      }
      .share_price{
        color: black;
        padding-left: 10px;
        font-size: 30px;
      }
      .share_change{
        padding-left: 10px;
      }
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
        <form method="post">
              <?php
                $index = 0;
                
                
                $class_name = array();
                $class_name[0] = "card bg-gradient-success card-img-holder text-white";
                $class_name[1] = "card bg-gradient-info card-img-holder text-white";
                $class_name[2] = "card bg-gradient-danger card-img-holder text-white";
                $stocks_list = mysqli_query($conn,"SELECT MY.id,MY.name,MY.amt,MY.qtt,ST.img_dir,ST.value FROM ".$_SESSION['userdb']." MY,stocks ST WHERE MY.id=ST.id;");


                echo '<div class="row">';

                while($row = $stocks_list->fetch_assoc()){

                  $total_value = $row['qtt'] * $row['value'];
                  $old_value = $row['qtt'] * $row['amt'];
                  $dif2 = $total_value - $old_value;

                  $dif = $row['value'] - $row['amt'];

                  if($dif<0){
                    $step1 = $row['amt']-$row['value'];
                    $step2 = $step1/$row['amt'];
                    $change_per = $step2*100;
                  }
                  else{
                    $step1 = $row['value']-$row['amt'];
                    $step2 = $step1/$row['value'];
                    $change_per = $step2*100;
                  }
                  
                  $change_color = "#33cc33";
                    $arrow = "mdi mdi-arrow-up";
                    $btn_index = $row['id'];

                  if($dif2 < 0){
                    $change_color = "red";
                    $arrow = "mdi mdi-arrow-down";
                    $dif2 = ($dif2)-$dif2*2;
                  }
                  if($dif2==0){
                    $change_color = "black";
                    $arrow = "mdi mdi-equal";
                  }

                  echo "<div class='col-md-4 stretch-card grid-margin'>
                          <div class='$class_name[$index]'>
                            <div class='card-body'>
                              <img src='assets/images/dashboard/circle.svg' class='card-img-absolute' alt='circle-image' />
                                <div class='share_box'>
                                  <img style='width: 70px; height:60px; padding-left: 10px;' src='".$row['img_dir']."' />
                                  <h5 class='share_name'>".$row['name']."</h5><br>
                                  <span class='share_price'>$total_value</span><span style='color: #595959;'> INR</span><span style='color: black;'><b> (".$row['qtt']." Share)</b></span><br>
                                  <span class='share_change' style='color: $change_color'><b><span class='$arrow'></span>$dif2 (".round($change_per,2)."%) Since Buy</b></span><br><br>
            <center><button class='myBtn' name='sell_share$btn_index'>SELL</button></center>
                              </div> 
                            </div>
                          </div>
                        </div>
                        ";
                        
                      $index++;

                      if($index==3){
                        $index=0;
                      }
                }

                echo "</div>"

              ?>

        </form>

        <?php
          if($stocks_list->num_rows ==0){
            echo "<h1>You Don't Have Any Stocks</h1>";
          }
        ?>

              


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


<?php
  $_SESSION['sql'] = 0;
  $stocks_list = mysqli_query($conn,"SELECT * FROM stocks;");

  $btn_index = 1;

  while($row = $stocks_list->fetch_assoc()){
    if(isset($_POST["sell_share$btn_index"])){
      $_SESSION['sql'] = $btn_index;
      echo '<script>window.location.href="sell_share.php";</script>';
    }
    $btn_index++;
  }  
?>