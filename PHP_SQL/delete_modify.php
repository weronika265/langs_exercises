<?php
	ini_set('display_errors', 1);
	ini_set('display_startup_errors', 1);
	error_reporting(0);
	
	include "autoryzacja.php";
	
	$conn = mysqli_connect($dbhost, $dbuser, $dbpass, $dbname)
	or die("Błąd połęczania: ".mysqli_connect_error() );
	echo "Połączenie udane<br><br>";
	
	mysqli_query($conn, "SET NAMES utf8");
?>

<?php
	echo '<!DOCTYPE html>
		<html>
		<head>
			<title></title>
			<meta charset="UTF-8">
			<style>
				td input {
					background-color: red;
				}
			</style>
		</head>
		</html>
		<body>';
		
		if($_POST['potwierdz_del'] == "Potwierdź")
			mysqli_query($conn, "DELETE FROM gracze WHERE gracz_id='".$_POST['gracz_id']."' ");
		
		if($_POST['potwierdz_mod'] == "Zatwierdź")
			mysqli_query($conn, "UPDATE gracze 
								LEFT JOIN druzyny
								ON gracze.druzyna_id=druzyny.druzyna_id
								SET imie='".$_POST['imie']."', nazwisko='".$_POST['nazwisko']."', numer='".$_POST['numer']."', nazwa='".$_POST['nazwa']."'
                                WHERE gracz_id='".$_POST['gracz_id']."'; ");
		
		$query = "SELECT gracze.gracz_id, gracze.imie, gracze.nazwisko, gracze.numer, druzyny.nazwa, druzyny.druzyna_id FROM gracze
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
			if( $_GET['edytuj'] == $arr['gracz_id'] )
			{
				echo '<form action="prezentacja.php" method="post">
						<tr>
							<td><input type="text" name="imie" value='.$arr['imie'].'></td>
							<td><input type="text" name="nazwisko" value='.$arr['nazwisko'].'></td>
							<td><input type="text" name="numer" value='.$arr['numer'].'></td>
							<td><input type="text" name="nazwa" value='.$arr['nazwa'].'></td>
							<input type="hidden" name="gracz_id" value='.$arr['gracz_id'].'>
							<td><input type="submit" name="potwierdz_mod" value="Zatwierdź"></td>
							<td><a href="prezentacja.php">Anuluj</a></td>
						</tr>
					</form>';
			}
			else if( $_GET['usun'] == $arr['gracz_id'] )
			{
				echo '<form action="prezentacja.php" method="post">
						<tr style="background-color: red">
							<td>'.$arr['imie'].'</td>
							<td>'.$arr['nazwisko'].'</td>
							<td>'.$arr['numer'].'</td>
							<td>'.$arr['nazwa'].'</td>
							<input type="hidden" name="gracz_id" value='.$arr['gracz_id'].'>
							<td><input type="submit" name="potwierdz_del" value="Potwierdź"></td>
						</tr>
					</form>';
			}
			else
			{
				echo '<tr>
						<td>'.$arr['imie'].'</td>
						<td>'.$arr['nazwisko'].'</td>
						<td>'.$arr['numer'].'</td>
						<td>'.$arr['nazwa'].'</td>
						<input type="hidden" name="gracz_id" value='.$arr['gracz_id'].' >
						<td><a href="prezentacja.php?edytuj='.$arr['gracz_id'].' ">Zmień</a></td>
						<td><a href="prezentacja.php?usun='.$arr['gracz_id'].' ">Usuń</a></td>';
				echo '</tr>';
			}
		}
		echo '</table>';
		
	echo '</body>
		</html>';
?>