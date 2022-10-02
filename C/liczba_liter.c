#include <stdio.h>

// liczba liter w napisie
int main()
{
    int lc = 0; //inicjowanie zmiennej przechowywujacej liczbe liter, poczatkowo jest ich 0
    char c;

    while( (c = getchar()) != EOF )                             //wykonuj dopoki program nie napotka znaku konca pliku
        if( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )  //jesli czytany znak to a-z lub A-Z, dodaj do licznika liter
            lc++;
        printf("%d", lc);

    return 0;
}
