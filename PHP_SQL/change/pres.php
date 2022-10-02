<?php
	ini_set('display_errors', 1);
	ini_set('display_startup_errors', 1);
	error_reporting(0);
	
	include "autoryzacja.php";
	
	$conn = mysqli_connect($dbhost, $dbuser, $dbpass, $dbname)
	or die("Błąd połęczania: ".mysqli_connect_error() );
	echo "Połączenie udane<br><br>";
	
	mysqli_query($conn, "SET NAMES utf8");

	//if(isset($_POST['gracz_id']) )
		//mysqli_query($conn, " ".$_POST['imie']. "");
		mysqli_query($conn, "UPDATE gracze 
		LEFT JOIN druzyny
		ON gracze.druzyna_id=druzyny.druzyna_id
		SET imie='".$_POST['imie']."', nazwisko='".$_POST['nazwisko']."', numer='".$_POST['numer']."', nazwa='".$_POST['nazwa']."'
		WHERE gracz_id='".$_POST['gracz_id']."' ");
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
		
		$query = "SELECT gracze.gracz_id, gracze.imie, gracze.nazwisko, gracze.numer, druzyny.nazwa FROM gracze
				LEFT JOIN druzyny
				ON gracze.druzyna_id=druzyny.druzyna_id";
		$result = mysqli_query($conn, $query);
			
		echo '<table border>
			<th>Imie</th>
			<th>Nazwisko</th>
			<th>Numer</th>
			<th>Nazwa drużyny</th>';
		while($arr = mysqli_fetch_array($result) )
		{
				echo '<tr>
				<td>'.$arr['imie'].'</td>
				<td>'.$arr['nazwisko'].'</td>
				<td>'.$arr['numer'].'</td>
				<td>'.$arr['nazwa'].'</td>
				<td><a href="change.php?gracz_id='.$arr['gracz_id'].' ">Modyfikuj</a></td>';
				echo '</tr>';
		}
		echo '</table>';
		
	echo '</body>
		</html>';
?>