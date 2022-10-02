#include <stdio.h>

// Sprawdzanie, czy napis jest palindromem

char pal(char *str)
{
    int l = 0, i;
	char *x = str;

	while(*x != '\0')
    {
        x++;
        l++;
    }

    char *begin = str, *end = str;
    for(i = 0 ; i < l - 1 ; i++)
        end++;

    while(begin++ < end--)
    {
        if(*begin != *end)
            return 1;
    }
    return 0;
}

int main()
{
    int num, i;
    char x[255];

    scanf("%d", &num);
    for(i = 0; i < num ; i++)
    {
        scanf("%s", x);
        if( pal(x) == 0 )
            printf("TAK\n");
        else
            printf("NIE\n");
    }

	return 0;
}
