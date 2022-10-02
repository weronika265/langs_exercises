#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*---------- Zadanie 1 - Wypisz napis z podanym argumentem ----------*/
   char podane_imie[20];

   printf("Podaj swoje imie: ");
   scanf("%s", &podane_imie);
   printf("Witaj %s", podane_imie);



    /*---------- Zadanie 2 - najmniejsza wartosc w tablicy ----------*/
   int tab[5];

   printf("Podaj 5 liczb: ");
   for(int i = 0 ; i < 5 ; i++) scanf("%d", &tab[i]);

   int min = tab[0];
   for(int i = 1 ; i < 5 ; i++)
       if(tab[i] < min)
           min = tab[i];
   printf("Najmniejsza wartosc: %d", min);



    /*---------- Zadanie 3 - najwieksza wartosc w tablicy ----------*/
   int tab[5];

   printf("Podaj 5 liczb: ");
   for(int i = 0 ; i < 5 ; i++) scanf("%d", &tab[i]);

   int max = tab[0];
   for(int i = 1 ; i < 5 ; i++)
       if(tab[i] > max)
           max = tab[i];
   printf("Najwieksza wartosc: %d", max);



    /*---------- Zadanie 4 - zastap liczby parzyste zerami ----------*/
   int tab[5];

   printf("Program zastepujacy parzyste liczby zerami.\n");
   printf("Podaj 5 liczb: ");
   for(int i = 0 ; i < 5 ; i++) scanf("%d", &tab[i]);

   int i;
   for(i = 0 ; i < 5 ; i++)
   {
       if(tab[i] % 2 == 0)
           tab[i] = 0;
       printf("%d ", tab[i]);
   }




    /*---------- Zadanie 5 - suma liczb w 10-cio elementowej tablicy ----------*/
   int tab[10];

   printf("Podaj 10 liczb: ");
   for(int i = 0 ; i < 10 ; i++) scanf("%d", &tab[i]);

   int sum = 0;
   for(int i = 0 ; i < 10 ; i++)
       sum += tab[i];

   printf("Suma: %d", sum);



    /*---------- Zadanie 6 - tabliczka mnozenia w tablicy 2d ----------*/
   int mult[11][11];

   for(int i = 1 ; i <= 10 ; i++)
   {
       for(int j = 1 ; j <= 10 ; j++)
       {
           mult[i][j] = i * j;
           printf("%3d ", mult[i][j]);
       }
       printf("\n");
   }



    /*---------- Zadanie 7 - srednia liczb w tablicy ----------*/
   int n, sum = 0, x = 1;
   float avg;

   printf("Podaj rozmiar tablicy: ");
   scanf("%d", &n);
   int tab[n];

   for(int i = 0 ; i < n ; i++)
   {
       tab[i] = x;
       sum += tab[i];
       x++;
   }

   avg = (float)sum / n;
   printf("Srednia wynosi: %.2f", avg);



    /*---------- Zadanie 8 - kwadrat z 'X' o podanych rozmiarach ----------*/
   int n;

   printf("Podaj dlugosc boku kwadratu: ");
   scanf("%d", &n);

   for(int row = 0 ; row < n ; row++)
   {
       for(int col = 0 ; col < n ; col++) printf("X ");
       printf("\n");
   }



    /*---------- Zadanie 9 - stary czy mlody ----------*/
   int wiek;

   printf("Podaj swoj wiek: ");
   scanf("%d", &wiek);

   switch(wiek)
   {
   ////case 1 ... 40: //niektore kompilatory
   case 1:
   case 2:
   case 3:
   case 4:
   case 5:
   case 6:
   case 7:
   case 8:
   case 9:
   case 10:
   case 11:
   case 12:
   case 13:
   case 14:
   case 15:
   case 16:
   case 17:
   case 18:
   case 19:
   case 20:
   case 21:
   case 22:
   case 23:
   case 24:
   case 25:
   case 26:
   case 27:
   case 28:
   case 29:
   case 30:
   case 31:
   case 32:
   case 33:
   case 34:
   case 35:
   case 36:
   case 37:
   case 38:
   case 39:
   case 40:
           printf("Jestes mlody");
           break;

   default:
           printf("Jestes stary");
           break;
   }



    /*---------- Zadanie 10 - horoskop dla znaku ----------*/
   int zodiak;

   printf("Baran - 1\n");
   printf("Byk - 2\n");
   printf("Bliznieta - 3\n");
   printf("Rak - 4\n");
   printf("Lew - 5\n");
   printf("Panna - 6\n");
   printf("Waga - 7\n");
   printf("Skorpion - 8\n");
   printf("Strzelec - 9\n");
   printf("Koziorozec - 10\n");
   printf("Wodnik - 11\n");
   printf("Ryby - 12\n");
   printf("Wybierz swoj znak zodiaku (nr): ");
   scanf("%d", &zodiak);

   switch(zodiak)
   {
       case 1:
           printf("Twoim zywiolem jest ogien, a naturalna dynamika pcha cie nieustanie w strone podboju.\n"
                  "Dlatego najwiekszym wyzwaniem, ktore moze rzucic ci Kosmos, jest wiwisekcja ambicji.");
           break;

       case 2:
           printf("Twoje przyzwyczajenia blokuja droge do glebszego doswiadczania rzeczywistosci.\n"
                  "Najintensywniejsze emocje czekaja na styku tego, co komfortowe, z tym, co wywoluje niechec.");
           break;

       case 3:
           printf("Nie wiecej niz trzy razy w zyciu Kosmos daje szanse na doszczetne obalenie murow,\nktorymi odgradzamy sie od doswiadczenia prawdziwej bliskosci.");
           break;

       case 4:
           printf("Poddawanie sie wplywom powinno byc aktem dobrowolnym i to bedzie twoja pierwsza nauka.\n"
                  "Najwiekszym wyzwaniem moze okazac sie ujarzmienie niekontrolowanej empatii, ktora otwiera droge do naduzyc.");
           break;

       case 5:
           printf("W rutynowych gestach kryje sie szacunek dla ciala przez ciaglosc zabiegow pielegnacyjnych, przestrzeni mentalnej,\nktora oszczedzasz na wazniejsze sprawy, ergonomii codziennosci.\n"
                  "Na swiatlo dzienne zostana wystawione zaniedbania i niedopatrzenia.");
           break;

       case 6:
           printf("Dzieki przymusowi zorganizowania swojego zycia tak, by bylo w nim miejsce na spontanicznosc, dowiesz sie,\njak wazne jest branie odpowiedzialnosci za szczescie.\n"
                  "Skonczy sie czekanie na pretekst do dzialania. Nikt nie zadba o twoj instynkt zabawy lepiej niz ty.");
           break;

       case 7:
           printf("Jako osoba dorosla dom budujesz i definiujesz na swoich zasadach,\ndlatego przywiazanie do wspomnien blokuje ci mozliwosc zbudowania nowej przestrzeni.");
           break;

       case 8:
           printf("Kontynuujesz ekspansje na plaszczyznie intelektualnej, poszukujesz wlasnego jezyka\ni sposobow na skuteczniejsza komunikacje.\n"
                  "Uczysz sie rozumiec obce idee, w wyniku czego stajesz sie coraz bardziej otwarty na szanse i mozliwosci.");
           break;

       case 9:
           printf("Zabezpieczenie materialne pozwoli ci zadawac sobie filozoficzne pytania o wartosci.\n"
                  "Czeka cie mniej rozmachu, ale wiecej owocow, od ekspansji do struktury.");
           break;

       case 10:
           printf("Jestes znakiem zamykajacym epoke.\n"
                  "Uwaga wszechswiata skupi sie na tobie, twoje perypetie beda echem wydarzen rozgrywajacych sie na skale swiatowa.");
           break;

       case 11:
           printf("Czas dominacji twojego znaku nadchodzi wielkimi krokami, ale zanim to sie stanie, nauczysz sie stawiac sobie granice.");
           break;

       case 12:
           printf("Masz talent do rozpraszania ograniczen, natura stworzyla cie, by przebudowywac struktury,\nktore wydaja sie zbyt oczywiste.\n"
                  "To piekna cecha, czyniaca z ciebie poete, niezaleznie od sciezki zyciowej.");
           break;

       default:
           printf("Blad");
           break;
    }



    /*---------- Zadanie 11 - dlugosc wyrazu ----------*/
   char text[50];
   int l = 0;

   printf("Podaj wyraz: ");
   scanf("%s", &text);

   int i = 0;
   while(text[i] != '\0')
   {
       l++;
       i++;
   }
   printf("Dlugosc podanego wyrazu: %d", l);



    /*---------- Zadanie 12 - imie meskie czy zenskie ----------*/
   char text[50];

   printf("Podaj imie: ");
   scanf("%s", &text);

   int i = 0;
   while(text[i] != '\0')
       i++;

   if(text[i - 1] == 'a')
       printf("Imie zenskie");
   else
       printf("Imie meskie");



    /*---------- Zadanie 13 - czy wyrazy takie same ----------*/
   char w1[20];
   char w2[20];

   printf("Podaj dwa wyrazy: ");
   scanf("%s %s", &w1, &w2);

   int i = 0;
   while(w1[i] != '\0' || w2[i] != '\0')
   {
       if(w1[i] != w2[i])
       {
           printf("Wyrazy rozne");
           break;
       }
       i++;
   }

   if(w1[i] == '\0' && w2[i] == '\0')
   printf("Wyrazy rowne");



    /*---------- Zadanie 14 - ocenzurowanie wyrazu ----------*/
    char w[20];

    printf("Podaj wyraz: ");
    scanf("%s", &w);

    int i = 0;
    while(w[i] != '\0')
    {
        w[i] = '*';
        i++;
    }
    printf("%s", w);



    /*---------- Zadanie 15 - zmiana liter na wielkie ----------*/
    char str[20];

    printf("Podaj wyraz: ");
    scanf("%s", &str);

    int i = 0;
    while(str[i] != '\0')
    {
       if(str[i] >= 'a' && str[i] <= 'z')
           str[i] -= 32;
       i++;
    }
    printf("%s", str);



    /*---------- Zadanie 16 - zmiana liter na male ----------*/
    char str[20];

    printf("Podaj wyraz: ");
    scanf("%s", &str);

    int i = 0;
    while(str[i] != '\0')
    {
       if(str[i] >= 'A' && str[i] <= 'Z')
           str[i] += 32;
       i++;
    }
    printf("%s", str);



    /*---------- Zadanie 17 - duze litery na male, male na duze ----------*/
    char str[20];

    printf("Podaj wyraz: ");
    scanf("%s", &str);

    int i = 0;
    while(str[i] != '\0')
    {
       if(str[i] >= 'A' && str[i] <= 'Z')
           str[i] += 32;
       else
           str[i] -= 32;
       i++;
    }
    printf("%s", str);



    /*---------- Zadanie 18 - wszystkie dzielniki liczby ----------*/
    int num;

    printf("Podaj liczbe: ");
    scanf("%d", &num);

    printf("Dzielniki liczby %d: ", num);
    for(int i = 1 ; i <= num ; i++)
        if( num % i == 0)
           printf("%d ", i);



    /*---------- Zadanie 19 - zapisz imie do pliku ----------*/
    FILE *plik;
    plik = fopen("Imie.txt", "w");

    if( plik == NULL )
       printf("Wystapil blad podczas otwierania pliku.");
    else
       fprintf(plik, "Weronika");

    fclose(plik);



    /*---------- Zadanie 20 - wypisz zawartosc podanego pliku ----------*/
    FILE *plik1;
    char buff[100];
    char which[20];

    printf("Podaj nazwe pliku do odczytu\n");
    scanf("%s", &which);
    plik1 = fopen(which, "r"); //"SomeText.txt"

    if( plik1 == NULL )
       printf("Wystapil blad podczas otwierania pliku.");
    else
       while( fgets(buff, 100, plik1) != NULL )
           printf("%s", buff);
    fclose(plik1);



    /*---------- Zadanie 21 - zapisz tablice liczb do pliku ----------*/
    FILE *plik2;
    int tab[7] = {4, 68, 9, 20, 5, 8, 10};

    plik2 = fopen("tablica.txt", "w");

    if( plik2 == NULL )
       printf("Wystapil blad podczas otwierania pliku.");
    else
        for(int i = 0 ; i < 7 ; i++)
            fprintf(plik2, "%d ", tab[i]);
    fclose(plik2);



    /*---------- Zadanie 22 - wczytaj liczby z pliku do tablicy ----------*/
    FILE *plik3;
    int tab[7];

    plik3 = fopen("tablica.txt", "r");

    if( plik3 == NULL )
       printf("Wystapil blad podczas otwierania pliku.");
    else
    {
       for(int i = 0 ; i < 7 ; i++)
           fscanf(plik3, "%d", &tab[i]);

       for(int i = 0 ; i < 7 ; i++)
           printf("%d ", tab[i]);;
    }

    fclose(plik3);



    /*---------- Zadanie 23 - kopia pliku ----------*/
    FILE *ptr1, *ptr2;
    char buff[100];
    char name[40], copy[40];

    printf("Podaj nazwe pliku do skopiowania: ");
    scanf("%s", &name);
    printf("Podaj nazwe kopii pliku: ");
    scanf("%s", &copy);

    ptr1 = fopen(name, "r");
    if( ptr1 == NULL )
       printf("Wystapil blad podczas otwierania pliku.");
    else
       fscanf(ptr1, "%s", buff);

    ptr2 = fopen(copy, "w");
       fprintf(ptr2, buff); // :(
    while( fgets(buff, 100, ptr1) != NULL )
       fprintf(ptr2, buff);

    fclose(ptr1);
    fclose(ptr2);



    /*---------- Zadanie 24 - czy liczba jest doskonala ----------*/
   int num, dziel = 0;

   printf("Pogram sprawdzajacy, czy liczba jest doskonala.\n");
   printf("Podaj liczbe: ");
   scanf("%d", &num);

   for(int i = 1 ; i < num ; i++)
       if( num % i == 0)
           dziel += i;

   if( dziel == num )
       printf("Liczba jest doskonala.");
   else
       printf("Liczba nie jest doskonala.");



    /*---------- Zadanie 25 - symulacja 1000 rzutow koscia do gry ----------*/
   int rzut;
   srand(time(0));

   for(int i = 1 ; i <= 1000 ; i++)
   {
       rzut = rand() % 6 + 1;
       printf("Rzut kostka %d = %d,\t", i, rzut);
   }



    // /*---------- Zadanie 26 - wartosc oczekiwana rzutow z poprzedniego zadania ----------*/
   int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
   float rzut = 0;
   srand(time(0));

   int i, r;
   for(i = 1 ; i <= 1000 ; i++)
   {
       r = rand() % 6 + 1;
       if(r == 1)
           a++;
       else if(r == 2)
           b++;
       else if(r == 3)
           c++;
       else if(r == 4)
           d++;
       else if(r == 5)
           e++;
       else if(r == 6)
           f++;
   }
   rzut = 1*((float)a/1000) + 2*((float)b/1000) + 3*((float)c/1000) + 4*((float)d/1000) + 5*((float)e/1000) + 6*((float)f/1000);

   printf("Wartosc oczekiwana %d rzutow kostka wynosi %.2f", i - 1, rzut);



    /*---------- Zadanie 27 - sortowanie liczb w tablicy ----------*/
   int tab[10];
   int i, j, tmp, min;

   printf("Wczytaj liczby do tablicy (10): ");
   for(i = 0 ; i < 10 ; i++)
       scanf("%d", &tab[i]);

   for(i = 0 ; i < 10 ; i++)
   {
       min = i;
       for(j = i + 1 ; j < 10 ; j++)
           if( tab[j] < tab[min] )
               min = j;
       tmp = tab[min];
       tab[min] = tab[i];
       tab[i] = tmp;
   }

   printf("Posortowana tablica: ");
   for(int i = 0 ; i < 10 ; i++)
       printf("%d ", tab[i]);


    return 0;
}
