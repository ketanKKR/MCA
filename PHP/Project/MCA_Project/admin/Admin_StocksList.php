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
      .removebtn{
        margin-left: 25% ;
        text-decoration:none;
        color: #7d3c98; padding:2px 25px;
        margin-top: 10px;
        background-color:#0000;
        border:1px solid #7d3c98;
        border-radius:3px;
        font-weight: bold;
      }
      .addbtn{float:right; text-decoration:none; color: #7d3c98; padding:5px 25px; margin-right: 10px ; margin-top: 10px;  background-color:#0000; border:1px solid #7d3c98; border-radius:3px;}
      .paybtn{float:right; margin-top: 10px; text-decoration:none; color: #7d3c98; padding:2px 25px;  margin-right:22px; background-color:#0000; border:1px solid #7d3c98; border-radius:3px;}
      .paybtn img{width: 17px; margin-right: 2px;}
      .addbtn img{width: 17px; margin-right: 2px;}
      .editlist img{width: 20px; float: right; margin-right: -25px; margin-top: -47px;}
      .editlist a{padding: 30px;}
      .update{
        font-weight: bold;
        border: none;
        width: 30%;
      }
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

        <div class="row">
          <div class="col-lg-12 grid-margin stretch-card">
                <div class="card">

                  <div class="card-body">
                  
                    <div class="table-responsive">
                    <form method="post">
                    <table style="font-weight: bold;" class="table table-bordered">
                      <thead>
                        <tr style="background-color: #7d3c98; color: white;">
                          <th> Stock </th>
                          <th> Name </th>
                          <th> Value </th>
                          <th> Update </th>     
                        </tr>
                      </thead>
                      <tbody>
                        <?php
                          include ("database/db_con.php");
                          $qr = mysqli_query($conn,"SELECT * FROM stocks;");
                          while($res = mysqli_fetch_assoc($qr)){
                            $img = $res['img_dir'];
                            $btn_index = $res['id'];
                            
                            echo "<tr>";
                              echo "<td><img style='width: 65px; height: 65px;' src='$img'></td>";
                              echo '<td>'.$res["name"].'</td>';
                              echo '<td><input class="update" name="value'.$btn_index.'" type="number" value='.$res["value"].'></td>';
                              echo '<center><td> <input class="removebtn" type="Submit" value="UPDATE" name="update'.$btn_index.'"></center>';
                            echo "</tr>";
                          }
                        ?>
                      </tbody>
                    </table>
                    </form>



                    <!---------------------Conformation_Start-------------------->
                   
                    <!---------------------Conformation_End-------------------->

                  </div>
                  </div>
                </div>
              </div>

             
          <!--------------------- End List details table ------------------------>

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
  $stocks_list = mysqli_query($conn,"SELECT * FROM stocks;");

  $btn_index = 1;

  while($row = $stocks_list->fetch_assoc()){
    $value = array();
    
    if(isset($_POST["update$btn_index"])){
      $value[$btn_index] = $_POST["value$btn_index"];
      mysqli_query($conn,"UPDATE stocks SET value = $value[$btn_index]  WHERE id = $btn_index;");
      echo '<script>window.location.href="Admin_StocksList.php";</script>';
    }
    $btn_index++;
  }
?>