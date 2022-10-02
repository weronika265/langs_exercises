#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, *tab, i, a = 0, b = 0;                //*tab - wskaznik do tablicy deklarowanej dynamicznie,
                                                    //zmienne a, b przechowywujace ilosc wartosci spelniajacych warunki zinicjalizowane sa na 0 (nie zaczeto sprawdzania, wiec nie ma jeszcze wartosci)

    scanf("%d", &n);                                //wczytanie dlugosci tablicy
    tab = malloc( sizeof(int) * n );                //dynamiczne zadeklarowanie tablicy, przydzielenie 4*n bajtow na tablice
    for(i = 0 ; i < n ; i++)                        //wczytywanie wartosci do tablicy
        scanf("%d", &tab[i]);

    scanf("%d", &x);                                //wczytanie szukanej liczby

    for(i = 0 ; i < n ; i++)                        //sprawdzanie tablicy:
    {
        if(tab[i] % 2 == 0 && tab[i] < x)           //jesli wartosc w tablicy jest parzysta (nie ma reszty z dzielenia przez 2) i jest mniejsza od szukanej liczby
            a++;
        else if(tab[i] % 2 != 0 && tab[i] > x)      //jesli wartosc w tablicy jest nieparzysta (ma reszte z dzielenia przez 2) i jest wieksza od szukanej liczby
            b++;
    }
    printf("%d %d", a, b);

    free(tab);                                      //zwolnienie pamieci przeznaczonej dla tablicv

    return 0;
}
