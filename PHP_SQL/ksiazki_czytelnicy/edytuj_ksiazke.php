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
	<style>
	td input {
		background-color: red;
	}
	</style>
</head>
<body>
	<?php
		if( $_POST['potwierdz'] == "Potwierdź" )
			mysqli_query($conn, "UPDATE ksiazki SET
								tytul='".$_POST['tytul']."', imie_autora='".$_POST['imie_autora']."', nazwisko_autora='".$_POST['nazwisko_autora']."', rok_wydania='".$_POST['rok_wydania']."'
								WHERE id_ksiazki='".$_POST['id_ksiazki']."';");
								
		$result = mysqli_query($conn, "SELECT * FROM ksiazki ORDER BY tytul ASC;" );
		
		echo '<table border>
			<th>Tytuł</th>
			<th>Imię</th>
			<th>Nazwisko</th>
			<th>Rok</th>';
		while( $arr = mysqli_fetch_array($result) )
		{
			if( $_GET['edytuj'] == $arr['id_ksiazki'] )
			{
				echo '<form action="edytuj_ksiazke.php" method="post">
						<tr>
							<td><input type="text" name="tytul" value='.$arr['tytul'].'></td>
							<td><input type="text" name="imie_autora" value='.$arr['imie_autora'].'></td>
							<td><input type="text" name="nazwisko_autora" value='.$arr['nazwisko_autora'].'></td>
							<td><input type="text" name="rok_wydania" value='.$arr['rok_wydania'].'></td>
							<input type="hidden" name="id_ksiazki" value='.$arr['id_ksiazki'].'>
							<td><input type="submit" name="potwierdz" value="Potwierdź"></td>
							<td><a href="edytuj_ksiazke.php" style="background-color: darkred;">Anuluj</a></td>
						</tr>
					</form>';
			}
			else
			{
				echo '<tr>
					<td>'.$arr['tytul'].'</td>
					<td>'.$arr['imie_autora'].'</td>
					<td>'.$arr['nazwisko_autora'].'</td>
					<td>'.$arr['rok_wydania'].'</td>
					<input type="hidden" name="id_ksiazki" value='.$arr['id_ksiazki'].'>
					<td><a href="edytuj_ksiazke.php?edytuj='.$arr['id_ksiazki'].' ">Edytuj</a></td>
					</tr>';
			}
		}
		echo '</table>';
	?>
		
</body>
</html>