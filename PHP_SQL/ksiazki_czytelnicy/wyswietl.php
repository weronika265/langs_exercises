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
		$result = mysqli_query($conn, "SELECT * FROM ksiazki ORDER BY tytul ASC;" );
		echo '<table border>
			<th>Tytuł</th>
			<th>Imię</th>
			<th>Nazwisko</th>
			<th>Rok</th>';
		while( $arr = mysqli_fetch_array($result) )
		{
				echo '<tr>
					<td>'.$arr['tytul'].'</td>
					<td>'.$arr['imie_autora'].'</td>
					<td>'.$arr['nazwisko_autora'].'</td>
					<td>'.$arr['rok_wydania'].'</td>
					</tr>';
		}
		echo '</table><br><br>';
		
		$result2 = mysqli_query($conn, "SELECT * FROM czytelnicy ORDER BY nazwisko_czytelnika ASC;" );
		echo '<table border>
			<th>Imie</th>
			<th>Nazwisko</th>
			<th>Miasto</th>';
		while( $arr2 = mysqli_fetch_array($result2) )
		{
				echo '<tr>
					<td>'.$arr2['imie_czytelnika'].'</td>
					<td>'.$arr2['nazwisko_czytelnika'].'</td>
					<td>'.$arr2['miasto_czytelnika'].'</td>
					</tr>';
		}
		echo '</table>';
	?>
		
</body>
</html>