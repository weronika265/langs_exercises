#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*---------- Funkcja do zadania 7 ----------*/
int comp(char *str1, char *str2)
{
	int i = 0;
    while(str1[i] != '\0' || str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            return 0;
            break;
        }
        i++;
    }

    if(str1[i] == '\0' && str2[i] == '\0')
		return 1;
}


/*---------- Funkcja do zadania 4 i 5 ----------*/
unsigned int length(char *str)
{
	int l = 0;
	while( str[l] != 0 )
        l++;
	return l;
}


/*---------- Funkcja do zadania 4 i 5 ----------*/
int num(char *str)
{
	int val = 0, neg = 1;
	int n = length(str);

	int i = 0;
	if(str[0] == '-')
	{
		neg = -1;
		++i;
	}
	for( i ; i < n ; i++ )
	{
		int dig = str[i] - 48;
		val *= 10;
		val += dig;
	}
		return val * neg;
}


/*---------- Funkcje do zadania 13 ----------*/
int compPT(char *str1, char *str2)
{
	while( *str1 == *str2 )
	{
		if( *str1 != *str2 )
			return 0;
		str1++; str2++;
	}
	return (*str2 == '\0');
}

char *compToString(char *str1, char *str2)
{
	while( *str1 != '\0' )
	{
		if( *str1 == *str2 && compPT(str1, str2) )
			return str1;
		else
			str1++;
	}
	return 0;
}


int main(int amount, char *arg[])
{
	/*---------- Zadanie 1 - Wypisanie powitania dla imienia wpisanego w linii komend ----------*/
	if(amount == 1)
		return 0;
	else
		printf("Witaj %s!\n", arg[1]);



	/*---------- Zadanie 2 - ile argumentow podano do main'a ----------*/
   if(amount == 1)
	{
		printf("Ilosc podanych argumentow: %d\n", amount - 1);
		return 0;
	}
	printf("Ilosc podanych argumentow: %d\n", amount - 1);



	/*---------- Zadanie 3 - wypisz napis, jesli nie podano zadnych argumentow ----------*/
	if(amount == 1)
	{
		printf("Podaj jakies argumenty!!\n");
		return 0;
	}



	/*---------- Zadanie 4 - wypisz wieksza liczbe ----------*/
	if(amount == 1 || amount == 2)
	{
		printf("Za malo argumentow. Podaj 2.\n");
		return 0;
	}
	else
	{
		int x = num(arg[1]);
		int y = num(arg[2]);

		if( amount - 1 != 2 )
			printf("Podano > 2 argumentow. Brane beda pod uwage dwa pierwsze.\n");

		if( x == y )
			printf("Liczby rowne\n");
		else if( x > y )
			printf("Liczba wieksza: %d\n", x);
		else
			printf("Liczba wieksza: %d\n", y);
	}



	/*---------- Zadanie 5 - narysuj kwadrat o podanej wielkosci ----------*/
	if(amount == 1 || amount == 2)
	{
		printf("Za malo argumentow. Podaj 2.\n");
		return 0;
	}
	else
	{
		int x = num(arg[1]);
		int y = num(arg[2]);

		if( amount - 1 != 2 )
			printf("Podano > 2 argumentow. Brane beda pod uwage dwa pierwsze.\n");

		for(int i = 0 ; i < x ; i++)
		{
			for(int j = 0 ; j < y ; j++)
				printf("* ");
			printf("\n");
		}
	}



	/*---------- Zadanie 6 - argumenty przekazane do main'a----------*/
	if(amount == 1)
	{
		printf("Nie otrzymano argumentow.\n");
		return 0;
	}
	else
		for(int i = 1 ; i < amount ; i++)
			printf("%s\n", arg[i]);



	/*---------- Zadanie 7 - sprawdz, czy napisy takie same ----------*/
	if(amount == 1 || amount == 2)
	{
		printf("Za malo argumentow. Podaj 2.\n");
		return 0;
	}
	else
	{
		char *w1 = arg[1];
		char *w2 = arg[2];

		if( amount - 1 != 2 )
			printf("Podano > 2 argumentow. Brane beda pod uwage dwa pierwsze.\n");

		if( comp(w1, w2) == 1 )
			printf("Wyrazy rowne\n");
		else
			printf("Wyrazy rozne\n");
	}



	/*---------- Zadanie 8 - wypisz losowa opcje ----------*/
	srand(time(0));
	printf("%s\n", arg[rand() % (amount - 1) + 1]);



	FILE *ptr1 = 0, *ptr2 = 0;   // Do reszty zadan
	char *buff;					//

	/*---------- Zadanie 9 - dopisuj hasla do pliku ----------*/
	if( amount == 1 )
		return 0;
	else
	{
		ptr1 = fopen("password.txt", "a");

		if(ptr1 == NULL)
			printf("Wystapil blad podczas otwierania pliku.\n");
		else
			for(int i = 1; i < amount ; i++)
			fprintf(ptr1, "%s ", arg[i]);

		fclose(ptr1);
	}



	/*---------- Od zadania 10.. ----------*/
	if(amount == 1)
		return 0;
	
	/*---------- Zadanie 10 - linux touch ----------*/
	else if( comp(arg[1], "touch") == 1 )
	{
		if(amount < 3)
		{
			printf("Za malo argumentow.\n");
			return 0;
		}
		else
		{
			buff = malloc(sizeof(char) * 600);
			*buff = 0;

			ptr1 = fopen(arg[2], "r");
			if( ptr1 != NULL )
				fscanf(ptr1, "%s", buff);

			ptr2 = fopen(arg[2], "w");
			if( ptr2 == NULL )
				printf("Wystapil blad podczas otwierania pliku.\n");
			else
			{
					fprintf(ptr2, buff);
				while( fgets(buff, 600, ptr1) != NULL )
					fprintf(ptr2, buff);
			}

			fclose(ptr1);
			fclose(ptr2);
			free(buff);
		}
	}



	/*---------- Zadanie 11 - linux head ----------*/
	else if( comp(arg[1], "head") == 1 )
	{
		if(amount < 3)
		{
			printf("Za malo argumentow.\n");
			return 0;
		}
		else
		{
			buff = malloc(sizeof(char) * 255);

			ptr1 = fopen(arg[2], "r");

			if( ptr1 == NULL )
				printf("Wystapil blad podczas otwierania pliku\n");
			else
				for(int i = 0 ; i < 10 ; i++)
				{
					fgets(buff, 255, ptr1);
					printf("%s", buff);
				}
			fclose(ptr1);
			free(buff);
		}
	}



	/*---------- Zadanie 12 - linux tail----------*/
	else if( comp(arg[1], "tail") == 1 )
	{
		if(amount < 3)
		{
			printf("Za malo argumentow.\n");
			return 0;
		}
		else
		{
			buff = malloc(sizeof(char) * 255);
			int count = 0;

			ptr1 = fopen(arg[2], "r");
			ptr2 = fopen(arg[2], "r");

			if( ptr1 == NULL || ptr2 == NULL )
				printf("Wystapil blad podczas otwierania pliku\n");
			else
			{
				while( fgets(buff, 255, ptr1) != NULL )
					if(count < 10)
						count++;
					else
						fgets(buff, 255, ptr2);

				while( fgets(buff, 255, ptr2) != NULL )
					printf("%s", buff);
			}

			fclose(ptr1);
			fclose(ptr2);
			free(buff);
		}
   }



	/*---------- Zadanie 13 - linux grep ----------*/
	else if( comp(arg[1], "grep") == 1 )
	{
		if(amount < 4)
		{
			printf("Za malo argumentow.\n");
			return 0;
		}
		else
		{
			buff = malloc(sizeof(char) * 255);
			char *w = arg[2];

			ptr1 = fopen(arg[3], "r");

			if( ptr1 == NULL )
				printf("Wystapil blad podczas otwierania pliku\n");
			else
				while( fgets(buff, 255, ptr1) != NULL )
					if( compToString(buff, w) != 0)
						printf("%s", buff);

			fclose(ptr1);
			free(buff);
		}
	}



	/*---------- Zadanie 14 - linux cp ----------*/
	else if( comp(arg[1], "cp") == 1 )
	{
		if(amount < 4)
		{
			printf("Za malo argumentow.\n");
			return 0;
		}
		else{
			buff = malloc(sizeof(char) * 1000);

			ptr1 = fopen(arg[2], "r");
			if( ptr1 == NULL )
				printf("Wystapil blad podczas otwierania pliku.\n");
			else
				fscanf(ptr1, "%s", buff);

			if( ptr1 != NULL )
			{
				ptr2 = fopen(arg[3], "w");
					fprintf(ptr2, buff);
				while( fgets(buff, 1000, ptr1) != NULL )
					fprintf(ptr2, buff);
			}

			fclose(ptr1);
			fclose(ptr2);
			free(buff);
		}
	}



	/*---------- Zadanie 15 - linux rm ----------*/
	else if( comp(arg[1], "rm") == 1 )
	{
		if(amount < 3)
		{
			printf("Za malo argumentow.\n");
			return 0;
		}
		else
		{
			int rem = remove(arg[2]);

			if( rem == 0 )
				return 0;
			else
				printf("Wystapil blad podczas usuwania pliku.\n");
		}
	}



	/*---------- Zadanie 17 - linux mv ----------*/
	else if( comp(arg[1], "mv") == 1 )
	{
		if(amount < 4)
		{
			printf("Za malo argumentow.\n");
			return 0;
		}
		else
		{
			buff = malloc(sizeof(char) * 1000);

			ptr1 = fopen(arg[2], "r");
			if( ptr1 == NULL )
				printf("Wystapil blad podczas otwierania pliku.\n");
			else
				fscanf(ptr1, "%s", buff);

			if( ptr1 != NULL )
			{
				ptr2 = fopen(arg[3], "w");

					fprintf(ptr2, buff);
				while( fgets(buff, 1000, ptr1) != NULL )
					fprintf(ptr2, buff);
			}

			fclose(ptr1);
			fclose(ptr2);
			free(buff);

			if( comp(arg[2], arg[3]) == 0 )
				remove(arg[2]);
		}
	}



	/*---------- Zadanie 16 - linux history ----------*/
	FILE *hPtr = 0, *writeTo = 0;
	char buff2[255];
	int n = 0, nl = 0;

	writeTo = fopen("history.txt", "a+");

	for(int i = 0; i < amount ; i++)
        fprintf(writeTo, "%s ", arg[i]);
	fputs("\n", writeTo);

	if( comp(arg[1], "history") == 1 )
	{
		hPtr = fopen("history.txt", "r");
		while( fgets(buff2, 255, hPtr) != NULL )
			printf("  %d  %s", ++nl, buff2);
		fclose(hPtr);
	}

	fclose(writeTo);


	return 0;
}
