#include <stdio.h>

// odwracanie napisu

char inv(char *str)
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

    char tmp;
    for(i = 0 ; i < l / 2 ; i++)
    {
        tmp = *begin;
        *begin = *end;
        *end = tmp;

        begin++; end--;
    }
}

int main()
{
    int num, i;
    char x[255];

    scanf("%d", &num);
    for(i = 0; i < num ; i++)
    {
        scanf("%s", x);
        inv(x);
        printf("%s\n", x);
    }

	return 0;
}
