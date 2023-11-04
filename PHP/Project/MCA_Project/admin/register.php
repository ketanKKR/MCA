<?php
  if(isset($_POST['signin']))
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
                                  `qtt` int(15) NOT NULL DEFAULT 1,
                                  INDEX (`id`));";

                        echo $table;
                        mysqli_query($conn,$table);
                        mysqli_query($conn,"UPDATE user SET dbname='".$tabname."' WHERE id=".$ver[0].";");
                        mysqli_query($conn,"ALTER TABLE ".$tabname."  ADD CONSTRAINT FOREIGN KEY (`id`) REFERENCES `stocks`(`id`) ON DELETE RESTRICT ON UPDATE RESTRICT;");
                        header("location: login.php");
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
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
    <title>Grow More</title>
    <!-- plugins:css -->
    <link rel="stylesheet" href="assets/vendors/mdi/css/materialdesignicons.min.css">
    <link rel="stylesheet" href="assets/vendors/css/vendor.bundle.base.css">
    <!-- endinject -->
    <!-- Plugin css for this page -->
    <!-- End plugin css for this page -->
    <!-- inject:css -->
    <!-- endinject -->
    <!-- Layout styles -->
    <link rel="stylesheet" href="assets/css/style.css">
    <link rel="shortcut icon" href="assets/main_icon.ico" />
    <link rel="stylesheet" type="text/css" href="mycss.css">
  </head>
  <body>
    <div class="container-scroller">
      <div class="container-fluid page-body-wrapper full-page-wrapper">
        <div class="content-wrapper d-flex align-items-center auth">
          <div class="row flex-grow">
            <div class="col-lg-4 mx-auto">
              <div class="auth-form-light text-left p-5">
                <div class="brand-logo">
                  <img  src="assets\images\loginLogo.png">
                </div>
                <h4>New here?</h4><span style="color:red;"><?php if(isset($msg)) echo $msg;?></span>
                <h6 class="font-weight-light">Signing up is easy. It only takes a few steps</h6>
                <form class="pt-3" method="POST">
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
                    <input type="submit" class="btn btn-block btn-gradient-primary btn-lg font-weight-medium auth-form-btn" value="SIGN UP" name="signin" />
                  </div>
                  <div class="text-center mt-4 font-weight-light"> Already have an account? <a href="login.php" class="text-primary">Login</a>
                  </div>
                </form>
              </div>
            </div>
          </div>
        </div>
        <!-- content-wrapper ends -->
      </div>
      <!-- page-body-wrapper ends -->
    </div>
 
</html>