<?php
include 'header.php';
?>
<!DOCTYPE html>
<html>
<head>
	<title>Smart Waste System</title>
	<style type="text/css">
		body{
			margin:0;
			padding: 0;
			background: #E0E1EF;
			font-family: sans-serif;
		}
    table{
      margin: 10px;
      margin-right: 10px;
    }
    table, th, td {
      border: 1px solid black;
      text-align: center;
    }
 th{
  font-size: 20px;
 }

	</style>
</head>
<body>
	<center><h2>Welcome to Smart Waste System</h2></center>
	<div class="main">
	<table style="width:100%">
  <tr>
    <th>City</th>
    <th>Serial Number</th>
    <th>Address</th>
    <th>Status</th>
  </tr>
  <tr>
    <td rowspan="3">MODASA</td>
    <td>M1</td>
    <td>GEC MODASA</td>
    <td><strong id="check">-</strong></td>
  </tr>
  <tr>
    
    <td>M2</td>
    <td>TATVA COLLEGE</td>
    <td><strong>-</strong></td>
  </tr>
  <tr>
    
    <td>M3</td>
    <td>GIDC</td>
    <td><strong>-</strong></td>
  </tr>
  <tr>
    <td colspan="4"></td>
  </tr>
  <tr>
    <td rowspan="3">AHMEDABAD</td>
    <td>A1</td>
    <td>GEETA MANDIR</td>
    <td><strong>-</strong></td>
  </tr>

  <tr>
   
    <td>A2</td>
    <td>DANI LIMDA</td>
    <td><strong>-</strong></td>
  </tr>
  <tr>
   
    <td>A3</td>
    <td>MEMCO ROAD</td>
    <td><strong>-</strong></td>
  </tr>
</table>
		
	</div>
<!-- The core Firebase JS SDK is always required and must be listed first -->
    <!-- The core Firebase JS SDK is always required and must be listed first -->
<script src="https://www.gstatic.com/firebasejs/8.1.1/firebase-app.js"></script>
<script src="https://www.gstatic.com/firebasejs/8.1.1/firebase-auth.js"></script>
<script src="https://www.gstatic.com/firebasejs/8.1.1/firebase-database.js"></script>

<!-- TODO: Add SDKs for Firebase products that you want to use
     https://firebase.google.com/docs/web/setup#available-libraries -->
<script src="https://www.gstatic.com/firebasejs/8.1.1/firebase-analytics.js"></script>

<script>
  // Your web app's Firebase configuration
  // For Firebase JS SDK v7.20.0 and later, measurementId is optional
  var firebaseConfig = {
    apiKey: "AIzaSyAMToE4sciKkLpVbCToP5VcGQbOHOYJ2xs",
    authDomain: "smart-city-2883e.firebaseapp.com",
    databaseURL: "https://smart-city-2883e.firebaseio.com",
    projectId: "smart-city-2883e",
    storageBucket: "smart-city-2883e.appspot.com",
    messagingSenderId: "223430422852",
    appId: "1:223430422852:web:01c3a24264e6005af86711",
    measurementId: "G-1N487KZ5RP"
  };
  // Initialize Firebase
  firebase.initializeApp(firebaseConfig);
  firebase.analytics();
</script>
<script type="text/javascript" src="waste_check.js"></script>
</body>
</html>