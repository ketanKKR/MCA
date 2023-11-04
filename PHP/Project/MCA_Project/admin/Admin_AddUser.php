<?php
  include("component/session.php");
  include("database/db_con.php");
  include("component/Admin_countblock.php");
  include("component/Admin_Authentication.php");
  $_SESSION['sql'] = 0;


if(isset($_POST['signup']))
  {
    $name = $_POST['name'];
    $password = $_POST['password'];
    $phone = $_POST['phone'];
    $add = $_POST['add'];
    $gender = $_POST['gender'];
    if($name != "" and $password != "" and strlen($phone) >= 10 and strlen($phone) < 11 and $add != ""){
    //-------------------------------Registetion process-------------------------------------
        include("database/db_con.php");
        $chkqry = mysqli_query($conn,"SELECT phone FROM user WHERE phone='".$phone."';");
        $chkres = mysqli_fetch_row($chkqry);

        if(!$chkres[0]){   
          $res = mysqli_query($conn,"INSERT INTO user Values(null,'".$phone."','".$password."','".$name."','".$gender."',null,'U','".$add."',current_timestamp(),current_timestamp(),'empty',0);");

             $qry = "SELECT id,name,phone FROM user WHERE phone='".$phone."' AND password='".$password."';";
             $ver = mysqli_fetch_row(mysqli_query($conn,$qry));
        
                  if(isset($ver[0])){
                      $tabname = $ver[0].substr($ver[1],0,2).substr($ver[2],0,4);
                      $tabname = str_replace(' ','',$tabname);

                      $table = "CREATE TABLE ".$tabname." (
                                  `id` int(11) NOT NULL,
                                  `name` varchar(100) DEFAULT NULL,
                                  `amt` float NOT NULL,
                                  `qtt` int(15) NOT NULL DEFAULT 1
                                  INDEX (`id`));";

                        echo $table;
                        mysqli_query($conn,$table);
                        mysqli_query($conn,"UPDATE user SET dbname='".$tabname."' WHERE id=".$ver[0].";");
                        mysqli_query($conn,"ALTER TABLE ".$tabname."  ADD CONSTRAINT FOREIGN KEY (`id`) REFERENCES `stocks`(`id`) ON DELETE RESTRICT ON UPDATE RESTRICT;");
                        header("location: Admin_UserList.php");
                        echo $tabname;
                  }
        }
         else{$msg="phone alredy exist  - ".$phone;}
    //---------------------------------------------------------------------------------------
    }
    else{
      $msg = "empty fields...";
    }
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
            <div class="card">
            <div class="card-body">
            <form class="pt-3" method="POST">
              <h1>ADD USER</h1>
                  <div class="form-group">
                    <input type="text" class="form-control form-control-lg" id="exampleInputUsername1" placeholder="Name" name="name" required>
                  </div>

                  <div class="form-group">
                    <div>
                      <span>Gender:</span>
                      <label style="font-size: 17px; margin-left: 5%;">Male:</label>
                      <input type="radio" name="gender" value="M" required>
                      <label style="font-size: 17px; margin-left: 10%;">Female:</label>
                      <input type="radio" name="gender" value="F" required>
                    </div>
                  </div>

                  <div class="form-group">
                    <input type="number" class="form-control form-control-lg" minlength="10" maxlength="10" id="exampleInputphone1" placeholder="phone" name="phone" required>
                  </div>

                    <div class="form-group">
                    <input type="password" class="form-control form-control-lg" id="exampleInputPassword1" placeholder="Password" name="password" required>
                  </div>

                  <div class="form-group">
                    <input type="text" class="form-control form-control-lg" id="exampleInputUsername1" placeholder="city" name="add" required>
                  </div>
                  
                  <div class="mt-3">
                    <input type="submit" class="btn btn-block btn-gradient-primary btn-lg font-weight-medium auth-form-btn" value="SIGN UP" name="signup" />
                  </div>
                  
                </form>
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