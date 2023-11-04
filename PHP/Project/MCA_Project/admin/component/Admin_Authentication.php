<?php
	if($_SESSION['type']==0){
		session_destroy();
		header("location: Login.php");
	}
?>