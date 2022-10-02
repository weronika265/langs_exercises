#include <stdio.h>

// obliczanie najdluzszego ciagu skladajacego sie z samych jedynek 

int main()
{
    int ex, n, k, counter_ex = 0;        //ex - liczba zestawow testowych, n - dlugosc zestawu, k - max liczba jedynek, counter_ex - obieg petli dla ilosci zestawow
    scanf("%d\n", &ex);

    while(counter_ex < ex)               //dopoki nie zbadano kazdego zestawu, wykonuj instrukcje kolejno dla kazdego z nich
    {
        scanf("%d %d\n", &n, &k);

        int np_max = 0, i, j;            //np_max - dlugosc najdluzszego podciagu, poczatkowo takiego nie ma przed wczytaniem i zbadaniem
        char cb[n+1];                    //tablica char o dlugosci podanego ciagu, na koncu musi byc dodatkowe miejsce dla '\0'

        for(i = 0 ; i < n ; i++)         //wczytywanie kolejnych '0' i '1' w postaci znakow do tablicy
            scanf("%c", &cb[i]);
        cb[n] = '\0';                    //na koncu tablicy ustaw znak konczacy '\0'

        for(i = 0 ; i < n ; i++)         //petla glowna, zmieniajaca pozycje o 1, kiedy petla wewnetrza sprawdzi wszystkie kolejne elementy, rozpoczynajac od cb[i]
        {
            int np = 0, counter_k = 0;   //np - dlugosc podciagu, counter_k - zmienna zliczajaca jedynki
            for(j = i ; j < n ; j++)
            {
                if(cb[j] == '1')         //jesli znaleziona zostanie wartosc 1, dodaj ja do licznika jedynek
                    ++counter_k;

                if(counter_k > k)        //jesli znaleziono wiecej jedynek od wczesniej podanej ich maksmalnej ilosci, wyjdz z petli wewnetrznej
                    break;
                np++;                    //wpp zwieksz wartosc zmiennej przechowywujacej dlugosc badanego podciagu o jeden
            }
            if(np > np_max)              //jesli badany podciag jest wiekszy od najdluzszego znalezionego, przechowaj go jako najdluzszy
                np_max = np;
        }
        counter_ex++;                    //przejscie do kolejnego zestawu
        printf("%d\n", np_max);          //wypisanie najdluszego podciagu spelnijacego warunek w testowanym zestawie
    }
    return 0;
}
