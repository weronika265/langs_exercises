<?php
	include 'autoryzacja.php';
 
	$conn = mysqli_connect($dbhost, $dbuser, $dbpass, $dbname)
	or die('Bład połączenia z serwerem: ' . mysqli_connect_error());
	echo "Połączenie udane <br>";
 
	mysqli_query($conn,'SET NAMES utf8');
 
echo '<!DOCTYPE html>
    <html>
        <head>
	        <title></title>
			<meta charset="UTF-8">
		</head>
		<body>';

echo '<form action="" method="post">
		Imię: <input name="imie"> <br>
		Nazwisko: <input name="nazwisko"> <br>
 
		<input type="reset" value="Wyczyść">
		<input type="submit" value="Wyszukaj">			
	  </form>';
		
$result = mysqli_query($conn, "SELECT druzyny.nazwa FROM druzyny
								JOIN gracze ON
								druzyny.druzyna_id=gracze.druzyna_id
								WHERE gracze.imie='".$_POST['imie']."' AND gracze.nazwisko='".$_POST['nazwisko']."'");

while($arr=mysqli_fetch_array($result) )
{
		echo $arr['nazwa']."<br>";
}
 
echo '</body>
	  </html>';	
?>