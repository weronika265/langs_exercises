#include <stdio.h>
#include <math.h>

int main()
{
    /*---------- Zadanie 1 - wypisywanie ciagu ----------*/
   printf("Witaj EPIcki swiecie!");



    /*---------- Zadanie 2 - kwadrat 5x5 ----------*/
   printf("* * * * *\n*       *\n*       *\n*       *\n* * * * *");



    /*---------- Zadanie 3 - wczytaj wage i sprawdz ile brakuje do 100kg ----------*/
   float waga;

   printf("Program liczacy, ile brakuje Ci wagi do 100kg.\n");
   printf("Podaj swoja wage: \n");
   scanf("%f", &waga);
   printf("Do 100kg brakuje ci %.2fkg.", 100 - waga);



    /*---------- Zadanie 4 - suma, roznica, iloczy i iloraz dwoch liczb ----------*/
   float x, y;

   printf("Program liczacy +, -, *, /.\n");
   printf("Podaj dwie liczby: ");
   scanf("%f %f", &x, &y);
   printf("Dodawanie: %.2f + %.2f = %.2f \n", x, y, x + y);
   printf("Odejmowanie: %.2f - %.2f = %.2f \n", x, y, x - y);
   printf("Mnozenie: %.2f * %.2f = %.2f \n", x, y, x * y);
   printf("Dzielenie: %.2f / %.2f = %.2f \n", x, y, x / y);



    /*---------- Zadanie 5 - kody dla malych liter w ASCII ----------*/
   char znak = 'a';

   while( znak <= 'z' )
   {
       printf("%c, kod ASCII - %d\n", znak, znak);
       znak++;
   }



    /*---------- Zadanie 6 - numer ASCII dla znaku ----------*/
   char znak;

   printf("Zamiana znaku na kod ANCII.\n");
   printf("Wpisz znak: ");
   scanf("%c", &znak);
   printf("W kodzie ANCII znak %c to %d.", znak, znak);



    /*---------- Zadanie 7 - kod ASCII dla liczby (0-256) ----------*/
   int liczba;

   printf("Jaki znak ma liczba w ASCII.\n");
   printf("Podaj liczbe z przedzialu (0-256): ");
   scanf("%d", &liczba);

   if( (liczba > 0) && (liczba < 256) )
       printf("Liczba o kodzie ASCII %d to znak %c", liczba, liczba);
   else
       printf("Podales liczbe spoza przedzialu.");



    /*---------- Zadanie 8 - czy pelnoletni ----------*/
   int rocznik;

   printf("Czy jestes rocznikowo pelnoletni?\n");
   printf("Podaj swoj rok urodzenia: ");
   scanf("%d", &rocznik);

   if( (2020 - rocznik) >= 18 )
       printf("Jestes pelnoletni.");
   else
       printf("Nie jestes pelnoletni.");



    /*---------- Zadanie 9 - pici-polo ----------*/
   int pici = 14;
   int polo;

   printf("Program do gry w Pici-Polo\n");
   printf("Podaj liczbe: ");
   scanf("%d", &polo);

   if( polo < pici )
       printf("Przegrywasz.");
   else
       printf("Wygrywasz.");



    /*---------- Zadanie 10 - czy liczba podzielna przez 3, 5, 7 ----------*/
   int x;

   printf("Sprawdz czy liczba jest podzielna przez 3, 5, 7.");
   printf("Podaj liczbe: ");
   scanf("%d", &x);

   if( x % 3 == 0 && x % 5 == 0 && x % 7 == 0 )
       printf("Liczba podzielna przez 3, 5, 7.");
   else if( x % 3 == 0 && x % 5 == 0 )
       printf("Liczba podzielna przez 3 i 5.");
   else if( x % 3 == 0 && x % 7 == 0 )
       printf("Liczba podzielna przez 3 i 7.");
   else if( x % 5 == 0 && x % 7 == 0 )
       printf("Liczba podzielna przez 5 i 7.");
   else if( x % 3 == 0 )
       printf("Liczba podzielna przez 3.");
   else if ( x % 5 == 0 )
       printf("Liczba podzielna przez 5.");
   else if ( x % 7 == 0 )
       printf("Liczba podzielna przez 7.");
   else
       printf("Liczba niepodzielna przez 3, 5, 7.");



    /*---------- Zadanie 11 - petla do 1000 ----------*/
   printf("Petla liczaca do 1000.\n");

   int i = 0;
   while( i < 1001 )
   {
       printf("%d, ", i);
       i++;
   }



    /*---------- Zadanie 12 - petla do podanej liczby ----------*/
   int x;

   printf("Podaj liczbe, do ktorej ma byc liczone: ");
   scanf("%d", &x);

   int i = 0;
   while( i <= x )
   {
       printf("%d, ", i);
       i++;
   }



    /*---------- Zadanie 13 - petla do podanej liczby od tylu ----------*/
   int x;

   printf("Podaj liczbe, do ktorej ma byc liczone - od tylu: ");
   scanf("%d", &x);

   while( x >= 0 )
   {
       printf("%d, ", x);
       x--;
   }



    /*---------- Zadanie 14 - wypisz X'y ----------*/
   int liczba;

   printf("Wpisz, ile razy ma zostac wypisany 'X': ");
   scanf("%d", &liczba);

   int i = 0;
   while( i < liczba )
   {
       printf("X");
       i++;
   }



    /*---------- Zadanie 15 - gdzie konczy sie char (empirycznie) ----------*/
   char n = 120;

   while( n > 0 )
   {
       n++;
   }
   printf("Zakres typu char:\n");
   printf("Od %d ", n);
   n--;
   printf("do %d", n);



    /*---------- Zadanie 16 - gdzie konczy sie int (empirycznie) ----------*/
   int n = 2000000000;

   while( n > 0 )
   {
       n++;
   }
   printf("Zakres typu int:\n");
   printf("Od %d ", n);
   n--;
   printf("do %d", n);



    /*---------- Zadanie 17 - gdzie konczy sie unsigned int (empirycznie) ----------*/
   unsigned int n = 4000000000;

   while(n != 0)
   {
       n++;
   }
   printf("Zakres typu unsigned int:\n");
   printf("Od %u ", n);
   n--;
   printf("do %u", n);



    /*---------- Zadanie 18 - male litery alfabetu ----------*/
   printf("Wszystkie male litery alfabetu:\n");

   char litera = 'a';
   while( litera <= 'z' )
   {
       printf("%c, ", litera);
       litera++;
   }



    /*---------- Zadanie 19 - ASCII (numer i znak) ----------*/
   printf("Wartosci ASCII:\n");

   int i = 0;
   while( i < 257 )
   {
       printf("%d %c\n", i, i);
       i++;
   }



    /*---------- Zadanie 20 - rysuj kwadrat 4x4 kwadratem ASCII ----------*/
   int kwadrat = 219;

   int i = 0;
   while( i < 4 )
   {
       int j = 0;
       while( j < 9 )
       {
           printf("%c", kwadrat);
           j++;
       }

       printf("\n");
       i++;
   }



    /*---------- Zadanie 21 - gabka 4x4 ----------*/
   int gab = 176;

   int i = 0;
   while( i < 4 )
   {
       int j = 0;
       while( j < 9 )
       {
           printf("%c", gab);
           j++;
       }

       printf("\n");
       i++;
   }



    /*---------- Zadanie 22 - ramka 4x4 ----------*/

    ////1. z uzyciem petli???
   int x = 201;
   int y = 187;
   int i = 0;
   while( i < 4 )
   {
       int j = 0;
       while( j < 4 )
       {
           if( (i > 0 && i < 3) && (j > 0 && j < 3) )
           {
               printf("   ");
               j++;
           }
           else if( j == 0 && ( i == 0 || i == 3) )
           {
               printf("%c", x);
               x--;
               j++;
           }
           else if( j == 3 && ( i == 0 || i == 3) )
           {
               printf("%c", y);
               y++;
               j++;
           }
           else
           {
               if( i > 0 && i < 3 )
               printf("%c", 186);
               else
               printf("%c%c%c", 205, 205, 205);

               j++;
           }
       }
       printf("\n");
       i++;
   }

    ////2. proste
   printf("%c%c%c%c%c%c%c%c\n", 201, 205, 205, 205, 205, 205, 205, 187);
   printf("%c      %c\n", 186, 186);
   printf("%c      %c\n", 186, 186);
   printf("%c%c%c%c%c%c%c%c", 200, 205, 205, 205, 205, 205, 205, 188);



    /*---------- Zadanie 23 - czym sie rozni ----------*/
   int x = 5;

   printf("Odp.: wypisywane wartosci roznia sie wartoscia, tj.:\n\n");
   printf("Wartosc zmiennej: %d\n", x);
   printf("Adres zmiennej w pamieci: %d", &x);



    /*---------- Zadanie 24 - ulepszone pici-polo (z podpowiedzia) ----------*/
   int pico = 60;
   int polo;

   printf("Pico-Polo. Zgadnij liczbe:\n");
   while( 1 )
   {
       scanf("%d", &polo);

       if( polo < pico )
           printf("Liczba za mala. Podaj kolejna: ");
       else if( polo > pico )
           printf("Liczba za duza. Podaj kolejna: ");
       else
       {
           printf("Brawo! Udalo ci sie znalezc prawidlowa liczbe.");
           break;
       }
   }



    /*---------- Zadanie 25 - czy da sie zbudowac trojkat z podanych odcinkow ----------*/
   float a, b, c;

   printf("Czy z podanych bokow da sie utworzyc trojkat?\n");
   printf("Podaj dlugosci bokow: ");
   scanf("%f %f %f", &a, &b, &c);

   if( a >= b + c || b >= a + c || c >= a + b )
       printf("Z podanych bokow nie da sie zbudowac trojkata");
   else
       printf("Z podanych bokow da sie zbudowac trojkat");



    /*---------- Zadanie 26 - rownanie kwadratowe ----------*/
   int a, b, c, delta;
   float x1, x2, x0;

   printf("Program liczacy pierwiastki rownania kwadratowego.\n");
   printf("Podaj wspolczynniki rownania: ");
   scanf("%d %d %d", &a, &b, &c);
   delta = b*b - 4*a*c;

   if( a == 0 )
       printf("Brak rozwiazan. Rownanie liniowe.");
   else if( delta == 0 )
   {
       x0 = -b / (2 * a);
       printf("Delta rowna zero. Pierwiastek podwojny: %.3f", x0 );
   }
   else if( delta > 0 )
   {
       x1 = ( -b - sqrt(delta) ) / (2 * a);
       x2 = ( -b + sqrt(delta) ) / (2 * a);
       printf("Delta wieksza od zera. Pierwiastki: %.3f, %.3f", x1, x2);
   }
   else
       printf("Delta mniejsza od zera. Brak rozwiazan.");



    /*---------- Zadanie 27 - zmiana wartosci x z y ----------*/
   float x, y, tmp;

   printf("Podaj dwie liczby do zamiany:\n");
   printf("x = ");
   scanf("%f", &x);
   printf("y = ");
   scanf("%f", &y);

   tmp = x;
   x = y;
   y = tmp;

   printf("\nPo zamianie:\n");
   printf("x = %.2f\n", x);
   printf("y = %.2f", y);



    /*---------- Zadanie 28 - nwd ----------*/
   int x, y;
   int a, b;

   printf("NWD. Podaj dwie liczby: ");
   scanf("%d %d", &x, &y);
   a = x;
   b = y;

   while( a != b )
   {
       if( a > b )
           a -= b;
       else
           b -= a;
   }
   if( a > b )
       printf("NWD liczb %d i %d wynosi %d.", x, y, a);
   else
       printf("NWD liczb %d i %d wynosi %d.", x, y, b);



    /*---------- Zadanie 29 - czy pierwsza ----------*/
   int p, a = 2;

   printf("Program sprawdzajacy, czy liczba jest pierwsza.\n");
   printf("Podaj liczbe: ");
   scanf("%d", &p);

   while( (a <= p) && (p % a != 0) )
       a++;
   if( a == p )
       printf("Liczba jest pierwsza.");
   else
       printf("Liczba nie jest pierwsza");



    /*---------- Zadanie 30 - rysunek z X w petli ----------*/
   int row = 1, NoRows, spaces, c;

   printf("Podaj wysokosc trojkata:\n");
   scanf("%d", &NoRows);

   while (row < NoRows)
   {
       spaces = NoRows - row;
       while( spaces >= 1 )
       {
           printf(" ");
           spaces--;
       }

       c = 1;
       while( c <= row )
       {
           printf(" X");
           c++;
       }
       printf("\n");

       row++;
   }

}
