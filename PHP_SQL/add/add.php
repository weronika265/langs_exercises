<html>
<head>
<meta charset="UTF-8">
<title></title>
</head>
<body>
	<form action="dodaj.php" method="post">
			Podaj imię: <input type="text" name="imie"><br>
			Podaj nazwisko: <input type="text" name="nazwisko"><br>
			Podaj numer drużyny: <input type="text" name="druzyna_id"><br>
			Podaj numer gracza: <input type="text" name="numer"><br>
			<input type="submit" value="Dodaj">
	</form>
	
<?php
	include "autoryzacja.php";
	
	$conn = mysqli_connect($dbhost, $dbuser, $dbpass, $dbname)
	or die('Błąd połączenia z serwerem: '.mysqli_connect_error() );
	
	echo "Połączenie udane <br>";
	
	mysqli_query($conn,"INSERT INTO gracze (imie,nazwisko,druzyna_id,numer) VALUES ('".$_POST['imie']."','".$_POST['nazwisko']."',
	'".$_POST['druzyna_id']."','".$_POST['numer']."')");

	$result=mysqli_query($conn,"SELECT * FROM gracze;");
	
	echo '<table border>
		<th>Imie</th>
		<th>Nazwisko</th>';
	while($arr=mysqli_fetch_array($result) )
	{
		echo '<tr';
		if($_POST['imie']==$arr['imie'] && $_POST['nazwisko']==$arr['nazwisko']) echo ' style="background-color:blue"';
		echo '>';
		echo '<td>'.$arr['imie'].'</td>
			  <td>'.$arr['nazwisko'].'</td>';
		echo '</tr>';
	}
	echo '</table><br>';
?>
</body>
</html>