#include <stdio.h>
#include <stdlib.h>
#include <math.h>


    /*---------- Zadanie 2 - lista z imieniem i nazwiskiem ----------*/
    struct lista {
        char imie[20];
        char nazwisko[20];
    };



    /*---------- Zadanie 3 - struktura z najlepszymi wynikami gry ----------*/
    struct najlepsze_wyniki {
        char nazwa[30];
        int najlepszy_wynik[30];
    };



    /*---------- Zadanie 4 - uzupelnienie danych dla zad 2 ----------*/
    struct lista_exp {
        char imie[20];
        char nazwisko[20];
        char pesel[11];
        int wiek;
        char plec;
        char miejscowosc[30];
        float wzrost;
    };



    /*---------- Zadanie 5 - n-ta liczba fib ----------*/
    int fib(int n)
    {
        if(n == 0)
            return 0;
        else
        {
            if(n < 3)
                return 1;
            else
                return fib(n - 1) + fib(n - 2);
        }
    }



    /*---------- Zadanie 6 - najmniejsza wartosc w liczbie ----------*/
    int min(int tab[], int n)
    {
        int min = tab[0];
        for(int i = 1 ; i < n ; i++)
            if(tab[i] < min)
                min = tab[i];
        return min;
    }



    /*---------- Zadanie 7 - najwieksza wartosc w liczbie ----------*/
    int max(int tab[], int n)
    {
        int max = tab[0];
        for(int i = 1 ; i < n ; i++)
            if(tab[i] > max)
                max = tab[i];
        return max;
    }



    /*---------- Zadanie 8 - indeks do najmniejszej liczby w liscie ----------*/
    int min_index(int tab[], int n)
    {
        int min = tab[0];

        int i, index = 0;
        for(i = 0 ; i < n ; i++)
            if(tab[i] < min)
            {
                min = tab[i];
                index = i;
            }

        return index;
    }



    /*---------- Zadanie 9 - czy liczba istnieje w tablicy ----------*/
    void czy_istnieje(int tab[], int n, int x)
    {
        int i;
        for(i = 0 ; i < n ; i++)
        {
            if(tab[i] == x)
            {
                printf("Liczba istnieje w podanej tablicy");
                break;
            }
        }
        if(i == n)
            printf("Liczba nie istnieje w podanej tablicy");
    }



    /*---------- Zadanie 10 - dlugosc wczytanego napisu --------*/
    int dlugosc(char napis[])
    {
        int l = 0;
        while( napis[l] != '\0' )
            l++;

        return l;
    }



    /*---------- Zadanie 11 - czy ciagi sa takie same --------*/
    void czy_rowne(char w1[], char w2[])
    {
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
    }



    /*---------- Zadanie 12 - czy tablice sa takie same --------*/
    void czy_identyczne(int tab1[], int tab2[], int n, int m)
    {
        int i;

        if( n != m )
            printf("Tablice rozne");
        else
            for(i = 0 ; i < n ; i++)
                if(tab1[i] != tab2[i])
                {
                    printf("Tablice rozne");
                    break;
                }
        if(i == n)
            printf("Tablice rowne");
    }



    /*---------- Zadanie 13 - wypisz strukture punkt --------*/
    struct Punkt {  //struktura do zadania 13, 14 i 15
        int x;
        int y;
    };

    void wypisz_struct(struct Punkt s)
    {
        printf("x = %d\n", s.x);
        printf("y = %d", s.y);
    }



    /*---------- Zadanie 14 - wczytaj dane do struktury punkt --------*/
    void wpisz_do_struct(struct Punkt *s)
    {
        int a, b;
        printf("x = ");
        scanf("%d", &a);
        s -> x = a;

        printf("y = ");
        scanf("%d", &b);
        s -> y = b;
    }



    /*---------- Zadanie 15 - dlugosc dla dwoch elementow typu punkt --------*/
    float length(struct Punkt a, struct Punkt b)
    {
        float l;
        l = sqrt((b.x - a.x)*(b.x - a.x) + (b.y - a.y)*(b.y - a.y));
        return l;
    }



    /*---------- Zadanie 16 - czy liczba pierwsza --------*/
    void pierwsza(int p)
    {
        int a = 2;
        while( (a <= p) && (p % a != 0) )
            a++;
        if( a == p )
            printf("Liczba jest pierwsza.");
        else
            printf("Liczba nie jest pierwsza");
    }



    /*---------- Zadanie 17 - zapisz tekst do pliku --------*/
    void zapisz_do(char tekst[], char *filename)
    {
        FILE *ptr;
        char buff[100];

        ptr = fopen(filename, "w");

        if(ptr == NULL)
            printf("Wystapil blad podczas otwierania pliku.");
        else
            fprintf(ptr, tekst);

        fclose(ptr);
    }


int main()
{
    /*---------- Zadanie 1 - utworz tablice dynamiczna 10 000 elementow ----------*/
   int *tab;

   tab = malloc(sizeof(int) * 10000);

   free(tab);



    /*---------- ***Do zadania 2*** ----------*/
   struct lista osoba1 = {"Samuel", "Kadet"};

   printf("%s %s", osoba1.imie, osoba1.nazwisko);



    /*---------- ***Do zadania 3*** ----------*/
   int *tab, n;
   tab = malloc(sizeof(int) * n);
   struct najlepsze_wyniki nr1;

   printf("Podaj liczbe najlepszych wynikow do wpisania: ");
   scanf("%d", &n);
   printf("Podaj najlepsze wyniki: ");
   for(int i = 0 ; i < n ; i++)
       scanf("%d", &nr1.najlepszy_wynik[i]);

   printf("Najlepsze wyniki: ");
   for(int i = 0 ; i < n ; i++)
       printf("%d ", nr1.najlepszy_wynik[i]);

   free(tab);



    /*---------- ***Do zadania 4*** ----------*/
   struct lista_exp pierwszy = {"Henryk", "Kosa", "12345678911", 60, 'm', "Szczecin", 183.7};

   printf("%s %s, lat %d\nplec: %c\nnr pesel: %s\nwzrost: %3.1f\nmiejscowosc: %s ", pierwszy.imie, pierwszy.nazwisko, pierwszy.wiek, pierwszy.plec, pierwszy.pesel, pierwszy.wzrost, pierwszy.miejscowosc);



    /*---------- ***Do zadania 5*** ----------*/
   int num;
   printf("Podaj liczbe ciagu Fibonacciego do wypisania: ");
   scanf("%d", &num);
   printf("%d liczba ciagu Fibonacciego to %d", num, fib(num) );



    /*---------- ***Do zadania 6, 7, 8 i 9*** ----------*/
   int n, *tab, liczba;

   tab = malloc(sizeof(int) * n);

   printf("Podaj wielkosc tablicy: ");
   scanf("%d", &n);

   printf("Wczytaj liczby do tablicy (%d): ", n);
   for(int i = 0 ; i < n ; i++)
       scanf("%d", &tab[i]);

   printf("Najmniejsza liczba w tablicy to %d.\n", min(tab, n) );  //6

   printf("Najwieksza liczba w tablicy to %d.\n", max(tab, n) );     //7

   printf("Index najmniejszej liczby w tablicy to %d.\n\n", min_index(tab, n) );   //8

   printf("Podaj szukana liczbe: ");   //9
   scanf("%d", &liczba);
   czy_istnieje(tab, n, liczba);

   free(tab);



    /*---------- ***Do zadania 10*** ----------*/
   char slowo[30];
   printf("Podaj slowo: ");
   scanf("%s", &slowo);
   printf("Dlugosc wczytanego napisu wynosi %d", dlugosc(slowo) );



    /*---------- ***Do zadania 11*** ----------*/
   char w1[20];
   char w2[20];

   printf("Podaj dwa wyrazy: ");
   scanf("%s %s", &w1, &w2);

   czy_rowne(w1, w2);



    /*---------- ***Do zadania 12*** ----------*/
   int n, m, *tab1, *tab2;

   tab1 = malloc(sizeof(int) * n);
   tab2 = malloc(sizeof(int) * m);

   printf("Podaj wielkosc tablicy 1: ");
   scanf("%d", &n);

   printf("Wczytaj liczby do tablicy 1 (%d): ", n);
   for(int i = 0 ; i < n ; i++)
       scanf("%d", &tab1[i]);

   printf("Podaj wielkosc tablicy 2: ");
   scanf("%d", &m);

   printf("Wczytaj liczby do tablicy 2 (%d): ", m);
   for(int i = 0 ; i < m ; i++)
       scanf("%d", &tab2[i]);

   czy_identyczne(tab1, tab2, n, m);

   free(tab1);
   free(tab2);



    /*---------- ***Do zadania 13 i 14*** ----------*/
   struct Punkt pkt1;
   pkt1.x = 5;
   pkt1.y = 2;

   printf("13.\n");
   wypisz_struct(pkt1);    //13

   printf("\n\n14.\n");
   wpisz_do_struct(&pkt1); //14
   printf("Sprawdzenie:\n");
   wypisz_struct(pkt1);



    /*---------- ***Do zadania 15*** ----------*/
   struct Punkt pkt1, pkt2;

   printf("Punkt a:\n");
   wpisz_do_struct(&pkt1);
   printf("Punkt b:\n");
   wpisz_do_struct(&pkt2);

   printf("Dlugosc dla dwoch elementow wynosi: %f", length(pkt1, pkt2) );



    /*---------- ***Do zadania 16*** ----------*/
   int liczba;

   printf("Program sprawdzajacy, czy liczba jest pierwsza.\n");
   printf("Podaj liczbe: ");
   scanf("%d", &liczba);

   pierwsza(liczba);



    /*---------- ***Do zadania 17*** ----------*/
   char tekst[255], plik[80];

   printf("Podaj tekst\n");
   fgets(tekst, 255, stdin);

   printf("\nPodaj plik, do ktorego ma zostac wpisany tekst: ");
   scanf("%s", plik);

   zapisz_do(tekst, plik);


    return 0;
}
