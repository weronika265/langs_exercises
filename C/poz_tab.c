#include <stdio.h>

// Najpozniejsze wystapienie wyszukiwanego elementu

int main()
{
    int amount, src, i, f = -1;     //f - zmienna do przechowywania indeksu znalezionego elementu, poczatkowo zainicjalizowana na -1 (indeksy numerowane od 0)

    scanf("%d%d", &amount, &src);   //wczytanie ilosci elementow w tablicy i wartosci szukanej
    int tab[amount];

    for(i = 0 ; i < amount ; i++)  //wczytywanie wartosci do tablicy
    {                               //
        scanf("%d", &tab[i]);       //

        if(tab[i] == src)           //sprawdzanie, czy element pod indeksem 'i' jest rowny szukanej wartosci
            f = i;                  //jesli tak, to pod zmienna podstaw nr indeksu tego elementu
    }

    if(f == -1)                     //jesli nie znaleziono szukanej liczby, wypisz 'BRAK', wpp wypisz indeks najpozniejszego jej wystapienia
        printf("BRAK");
    else
        printf("%d", f);

    return 0;
}
