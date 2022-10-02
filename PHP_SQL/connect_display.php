<html>
<head>
<meta charset="utf-8">
</head>
<body>
<?php
	include "autoryzacja.php";
	
	$conn = mysqli_connect($dbhost, $dbuser, $dbpass, $dbname)
	or die('Błąd połączenia z serwerem: '.mysqli_connect_error() );
	
	echo "Połączenie udane <br>";
?>

<h1> Gracze: </h1>
<?php
	$result=mysqli_query($conn,"SELECT * FROM gracze;");
	
	while($arr=mysqli_fetch_array($result) )
	{
		echo $arr['imie']." ".$arr['nazwisko'].'<br>';
	}
	echo '<br>';
	
	$result=mysqli_query($conn,"SELECT * FROM gracze;");
	
	echo '<table border>
		<th>Imie</th>
		<th>Nazwisko</th>';
	while($arr=mysqli_fetch_array($result) )
	{
		echo '<tr>';
		echo '<td>'.$arr['imie'].'</td>
			  <td>'.$arr['nazwisko'].'</td>';
		echo '</tr>';
	}
	echo '</table>';
?>

<h1> Przeciętna waga: </h1>
<?php
	$result=mysqli_query($conn,"SELECT gracze.druzyna_id, AVG(parametry_gracza.waga) AS waga FROM gracze
								JOIN parametry_gracza
								ON gracze.gracz_id=parametry_gracza.gracz_id
								WHERE gracze.druzyna_id IS NOT NULL
								GROUP BY gracze.druzyna_id;");
	
	echo '<table border>
		<th>Druzyna</th>
		<th>Waga</th>';
	while($arr=mysqli_fetch_array($result) )
	{
		echo '<tr>';
		echo '<td>'.$arr['druzyna_id'].'</td>
			  <td>'.$arr['waga'].'</td>';
		echo '</tr>';
	}
	echo '</table>';
	
	
	$result=mysqli_query($conn,"SELECT MAX(wynik) AS wynik FROM wyniki;");
	$arr = mysqli_fetch_array($result);
	echo '<br>';
	echo "<font size='5'>Największa liczba punktów zdobyta przez drużynę w pojedynczym meczu: ".$arr['wynik'].".</font>";
	echo '<br>';
	
	$result=mysqli_query($conn,"SELECT mecz_id, SUM(wynik) AS wynik FROM wyniki
								GROUP BY mecz_id
								ORDER BY wynik DESC LIMIT 1;");
	$arr=mysqli_fetch_array($result);
	echo '<br>';
	echo "<font size='5'>Najwięcej punktów w pojedynczym meczu zostało zdobyte w meczu nr: ".$arr['mecz_id'].". Było to ".$arr['wynik']." punktów.</font>";
?>

<h1> Gracze nienależący do żadnej drużyny: </h1>
<?php
	$result=mysqli_query($conn,"SELECT imie, nazwisko FROM gracze WHERE druzyna_id IS NULL;");
	$arr=mysqli_fetch_array($result);
	echo '<li>'.$arr['imie']." ".$arr['nazwisko'].'</li>';
	echo '<br>';
	
	$result=mysqli_query($conn,"SELECT COUNT(druzyna_id) AS druzyny FROM druzyny;");
	$arr=mysqli_fetch_array($result);
	echo '<br>';
	echo "<font size='5'>Wszystkich drużyn jest: ".$arr['druzyny'].".</font>";
	echo '<br>';
	
	$result=mysqli_query($conn,"SELECT COUNT(gracz_id) AS gracze FROM gracze;");
	$arr=mysqli_fetch_array($result);
	echo '<br>';
	echo "<font size='5'>Wszystkich graczy jest: ".$arr['gracze'].".</font>";
	echo '<br>';
	
	$result=mysqli_query($conn,"SELECT COUNT(*) AS liczba_meczy FROM mecze WHERE data='2013-06-11';");
	$arr=mysqli_fetch_array($result);
	echo '<br>';
	echo "<font size='5'>Liczba gier, które miały miejsce 11 czerwca 2013 r.: ".$arr['liczba_meczy'].".</font>";
	echo '<br>';
	
	$result=mysqli_query($conn,"SELECT gracze.imie, gracze.nazwisko, parametry_gracza.wzrost FROM gracze
								JOIN parametry_gracza
								ON gracze.gracz_id=parametry_gracza.gracz_id
								WHERE nazwisko='Sajda';");
	$arr=mysqli_fetch_array($result);
	echo '<br>';
	echo "<font size='5'>Najwyższym graczem jest: ".$arr['imie']." ".$arr['nazwisko'].", który ma ".$arr['wzrost']." cm wzrostu.</font>";
	echo '<br>';
?>

<h1> Drużyny: </h1>
<?php
	$result=mysqli_query($conn,"SELECT * FROM druzyny;");
	//$arr=mysqli_fetch_array($result); <- "bierze" pierwszy wiersz, w petli zaczyna od drugiego UWAGA
	
	echo '<table border>
		<th>druzyna_id</th>
		<th>nazwa</th>';
	while($arr=mysqli_fetch_array($result) )
	{
		echo '<tr>';
		echo '<td>'.$arr['druzyna_id'].'</td>
			  <td>'.$arr['nazwa'].'</td>';
		echo '</tr>';
	}
	echo '</table>';
?>
</body>
</html>