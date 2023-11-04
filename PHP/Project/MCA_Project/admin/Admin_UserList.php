<?php
  include("component/session.php");
  include("database/db_con.php");
  include("component/Admin_countblock.php");
  include("component/Admin_Authentication.php");
  $_SESSION['sql'] = 0;

  $User_List = "block";
  $Conformation = "none";



  $remove = mysqli_query($conn,"SELECT * FROM user;");

  while($row = $remove->fetch_assoc()){
    $btn_index = $row["id"];
    if(isset($_POST["Remove$btn_index"])){
      $_SESSION['User_id'] = $btn_index;
      $_SESSION['User_db'] = $row['dbname'];
      $_SESSION['User_name'] = $row['name'];
      $User_List = "none";
      $Conformation = "block";
    }
  }

  if(isset($_POST['YES'])){
    mysqli_query($conn,"DELETE FROM user WHERE id=".$_SESSION['User_id'].";");
    mysqli_query($conn,"DROP TABLE ".$_SESSION['User_db'].";");
    echo '<script>window.location.href="Admin_UserList.php";</script>';
  }

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
      }
      .addbtn{float:right; text-decoration:none; color: #7d3c98; padding:5px 25px; margin-right: 10px ; margin-top: 10px;  background-color:#0000; border:1px solid #7d3c98; border-radius:3px;}
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

        <div class="row">
          <div class="col-lg-12 grid-margin stretch-card">
                <div class="card">

                  <div class="card-body">
                  
                    <div class="table-responsive">
                    <form method="post" style="display: <?php echo $User_List ?>;">
                    <table class="table table-bordered">
                      <thead>
                        <tr style="background-color: #7d3c98; color: white;">
                          <th> Phone </th>
                          <!--<th> Password </th> -->
                          <th> Name </th>
                          <th> Gender </th>
                          <th> Address </th>
                          <th> Register Date </th>
                          <th> Last Login </th>
                          <th> BALANCE </th>
                          <th> Remove User </th>
                        </tr>
                      </thead>
                      <tbody>
                        <?php
                          include ("database/db_con.php");
                          $qr = mysqli_query($conn,"SELECT * FROM user;");
                          while($res = mysqli_fetch_assoc($qr))
                          {
                            $btn_index = $res['id'];
                            if($res['gender']=="F"){
                              $gender = "Female";
                            }
                            else{
                              $gender = "Male";
                            }
                            echo "<tr>";
                              echo '<td>'.$res["phone"].'</td>';
                              //  echo '<td>'.$res["password"].'</td>';
                              echo '<td>'.$res["name"].'</td>';
                              echo '<td>'.$gender.'</td>';
                              echo '<td>'.$res["address"].'</td>';
                              echo '<td>'.$res["reg_date"].'</td>';
                              echo '<td>'.$res["last_login"].'</td>';
                              echo '<td>'.$res["BALANCE"].'</td>';
                              echo '<center><td> <button class="removebtn" type="Submit" name="Remove'.$btn_index.'"><i class="mdi mdi-delete"></i></button> </td></center>';
                            echo "</tr>";
                          }
                        ?>
                      </tbody>
                    </table>
                      <a href="Admin_AddUser.php?" class="addbtn"><img src="assets\images\ui\add.png">ADD USER</a>
                    </form>



                    <!---------------------Conformation_Start-------------------->
                    <form method="post" style="display: <?php echo $Conformation; ?>;">
                      <center><img src="assets\images\ui\warning.png" style="width: 50px; height: 50px;"><br>
                      <span style="font-size: 20px;">Are You Sure You Want To Remove <?php echo $_SESSION['User_name']; ?>'s Account!<br></span><br><br>
                      <input class="btn btn-gradient-danger btn-icon-text" type="submit" name="YES" value="YES">
                      <input style="margin-left: 1%;" class="btn btn-gradient-success btn-icon-text" type="submit" name="NO" value="NO"></center>
                    </form>
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