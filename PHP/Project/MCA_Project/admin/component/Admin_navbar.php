<nav class="navbar default-layout-navbar col-lg-12 col-12 p-0 fixed-top d-flex flex-row">
  <div class="text-center navbar-brand-wrapper d-flex align-items-center justify-content-center">
    <a class="navbar-brand brand-logo" href="Admin.php"><img style="width: 170px; height: 30px;" src="assets/images/logo1.png" alt="logo" /></a>
    <a class="navbar-brand brand-logo-mini" href="Admin.php"><img src="assets/images/ledger.png" style="width:30px;" alt="logo" /></a>
  </div>
  <div class="navbar-menu-wrapper d-flex align-items-stretch">
    <button class="navbar-toggler navbar-toggler align-self-center" type="button" data-toggle="minimize">
      <span class="mdi mdi-menu"></span>
    </button>
    <h1 style="color:black; padding-top: 10px; margin-left: auto; margin-right: auto;">ADMIN PANEL</h1>
    <ul class="navbar-nav navbar-nav-right">
        
        <li class="nav-item">
       <a class="nav-link" href="Admin.php">
          <i class="mdi mdi-home"></i>    
        </a>
      </li>      
     
      <li class="nav-item nav-profile dropdown">
        <a class="nav-link dropdown-toggle" id="profileDropdown" href="#" data-bs-toggle="dropdown" aria-expanded="false">
          <div class="nav-profile-img">
            <img src="assets/images/Admin.png" alt="image">
            <span class="availability-status online"></span>
          </div>
          <div class="nav-profile-text">
            <p class="mb-1 text-black"><?php echo $_SESSION['name']; ?></p>
          </div>
        </a>
        <div class="dropdown-menu navbar-dropdown" aria-labelledby="profileDropdown">
          
          <div class="dropdown-divider"></div>
          <form method="POST"> <button class="dropdown-item" name="logout">
            <i class="mdi mdi-logout me-2 text-primary"></i> Signout </button></form>
           <div class="dropdown-divider"></div>
           <a href="acsetting.php" class="dropdown-item">
           <i class="mdi mdi-account-settings me-2 text-warning"></i> Account</a>
        </div>
      </li>
     <!-- <li class="nav-item nav-logout d-none d-lg-block">
       <a class="nav-link" href="#" name="logout">
          <i class="mdi mdi-power"></i>
        </a>
      </li>--
      <li class="nav-item nav-settings d-none d-lg-block">
        <a class="nav-link" href="">
          <i class="mdi mdi-format-line-spacing"></i>
        </a>
      </li>-->
       <li class="nav-item d-none d-lg-block full-screen-link">
        <a class="nav-link">
          <i class="mdi mdi-fullscreen" id="fullscreen-button"></i>
        </a>
      </li>
    </ul>
    <button class="navbar-toggler navbar-toggler-right d-lg-none align-self-center" type="button" data-toggle="offcanvas">
      <span class="mdi mdi-menu"></span>
    </button>
  </div>
</nav>