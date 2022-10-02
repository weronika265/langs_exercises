<?php
	include "autoryzacja.php";
	
	$conn = mysqli_connect($dbhost, $dbuser, $dbpass, $dbname)
	or die("Błąd połączenia z serwerem: ".mysqli_connect_error() );
	
	echo 'Połączenie udane';
	
	mysqli_query($conn, "SET NAMES utf8");
?>

<!DOCTYPE html>
<html>
<head>
	<title></title>
</head>
<body>
	<?php
		if( $_POST['dodaj'] == "Dodaj" && ($_POST['imie_czytelnika']!="" && $_POST['nazwisko_czytelnika']!="") )
			mysqli_query($conn, "INSERT INTO czytelnicy (imie_czytelnika, nazwisko_czytelnika, miasto_czytelnika)
								VALUES ( '".$_POST['imie_czytelnika']."', '".$_POST['nazwisko_czytelnika']."', '".$_POST['miasto_czytelnika']."') ");
								
		$result = mysqli_query($conn, "SELECT * FROM czytelnicy ORDER BY nazwisko_czytelnika ASC;" );
		echo '<table border>
			<th>Imie</th>
			<th>Nazwisko</th>
			<th>Miasto</th>';
		while( $arr = mysqli_fetch_array($result) )
		{
				echo '<tr>
					<td>'.$arr['imie_czytelnika'].'</td>
					<td>'.$arr['nazwisko_czytelnika'].'</td>
					<td>'.$arr['miasto_czytelnika'].'</td>
					</tr>';
		}
		echo '<tr>
			<form action="dodaj_czytelnika.php" method="post">
				<td><input type="text" name="imie_czytelnika"></td>
				<td><input type="text" name="nazwisko_czytelnika"></td>
				<td><input type="text" name="miasto_czytelnika"></td>
				<td><input type="submit" name="dodaj" value="Dodaj"></td>
			</form>
			</tr>';
		echo '</table>';
	?>
		
</body>
</html>