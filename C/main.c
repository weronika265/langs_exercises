#include <stdio.h>

// generowanie hasla z podanego slowa

/* Funkcja zwracajaca wskaznik do slowa, na ktorego koniec dodano inne slowo */
char *ToEnd(char *str1, char *str2, int l)
{
    int i;//, l = 0;
//    for( i = 0 ; str1[i] != '\0' ; i++ )    //obliczanie dlugosci slowa (poznajac index jego zakonczenia)
//        l++;

    for ( i = 0 ; str2[i] != '\0' ; i++ )   //dodanie nowego wyrazu na koniec pierwszego wyrazu (poczatkowy index str1 w miejscu zakonczenia wyrazu)
        str1[l + i] = str2[i];

    str1[l + i] = '\0'; //zakonczenie polaczonego wyrazu znakiem konczacym string

    return str1;
}

int main()
{
    int i, l = 0, c = 0;
    char pas[21];

    scanf("%s", pas);

    while( pas[l] != '\0' ) //obliczanie dlugosci podanego wyrazu
        l++;

    if( l < 6 ) //jesli slowo ma mniej niz 6 liter
    {
        int j = 0;
        char strcopy[11];
        while (pas[j] != '\0')  //kopiowanie podanego wyrazu do nowej zmiennej
        {
            strcopy[j] = pas[j];    //kopiowanie kolejnych znakow
            j++;
        }
        strcopy[j] = '\0';  //zakonczenie wyrazu znakiem konczacym string

        ToEnd(pas, strcopy, l);    //uzycie funkcji dodajacej skopiowany string na koniec podanego na wejsciu
    }
    l = 0;
    while( pas[l] != '\0' ) //obliczanie dlugosci wyrazu po jego wydluzeniu
        l++;

    for( i = 0 ; pas[i] != '\0' ; i++ ) //przejscie po slowie az do jego zakonczenia
    {

        if( pas[0] >= 'a' && pas[0] <= 'z' )    //zamiana litery pierwszej na duza jesli mala
            pas[i] -= 32;
        if( pas[l - 1] >= 'A' && pas[l - 1] <= 'Z' )    //zamiana litery ostatniej na mala jesli duza
            pas[l - 1] += 32;
        if( pas[i] == 'a' && i != l - 1)    //zamiana znaku a na 4 poza ostatnia
            pas[i] = '4';
        if( pas[i] == 's' && i != l - 1)    //zamiana znaku s na $ poza ostatnia
            pas[i] = '$';
        if( pas[i] == 'o' && i != l - 1)    //zamiana znaku o na @ poza ostatnia
            pas[i] = '@';
    }

    i = 0;
    while(pas[i] != '\0')
    {
        if( pas[i] >= 'a' && pas[i] <= 'z' )    //obliczanie ilosci malych liter w otrzymanym hasle
            c++;
        i++;
    }

    printf("!%s%d", pas, c);    //wypisanie otrzymanego hasla z wykrzyknikiem na poczatku i liczba malych liter na koncu

    return 0;
}
