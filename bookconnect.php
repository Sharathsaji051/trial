<?php
$mysql_host='localhost';
$mysql_user='22mca051';
$mysql_password='2632';
$conn=mysqli_connect($mysql_host,$mysql_user,$mysql_password);
if(mysqli_select_db($conn,'22mca051'))
{echo 'connection successful';
}
else{
echo 'connection failed';
}
?>
