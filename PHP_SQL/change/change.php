<?php
	ini_set('display_errors', 1);
	ini_set('display_startup_errors', 1);
	error_reporting(0);

	include "autoryzacja.php";
	
	$conn = mysqli_connect($dbhost, $dbuser, $dbpass, $dbname)
	or die("Błąd połęczania: ".mysqli_connect_error() );
	echo "Połączenie udane";
	
	mysqli_query($conn, "SET NAMES utf8");
?>

<?php
	echo '<!DOCTYPE html>
		<html>
		<head>
		<title></title>
		<meta charset="UTF-8">
		</head>
		</html>
		<body>';
		
	$result = mysqli_query($conn, "SELECT gracze.gracz_id, gracze.imie, gracze.nazwisko, gracze.numer, druzyny.nazwa FROM gracze
									LEFT JOIN druzyny
									ON gracze.druzyna_id=druzyny.druzyna_id 
									WHERE gracze.gracz_id=".$_GET['gracz_id']."; ");
	
	echo '<form action="pres.php" method="post">';
	while($arr=mysqli_fetch_array($result) )
	{
		echo '<input type="hidden" name="gracz_id" value='.$arr['gracz_id'].'><br>
			<input type="hidden" name="druzyna_id" value='.$arr['druzyna_id'].'><br>
			Imie: <input type="text" name="imie" value='.$arr['imie'].'><br>
			Nazwisko: <input type="text" name="nazwisko" value='.$arr['nazwisko'].'><br>
			Numer gracza: <input type="text" name="numer" value='.$arr['numer'].'><br>
			Druzyna: <input type="text" name="nazwa" value='.$arr['nazwa'].'><br>
			<input type="submit" value="Zmień">';
	}
	echo '</form>';
			
	echo '</body>
		</html>';
?>