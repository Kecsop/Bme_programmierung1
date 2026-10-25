/*9. Laborstunde, Aufgabe 9 - Jahreszeiten */
#include <stdio.h>

//a) Typ
enum season {SPRING, SUMMER, AUTUMN, WINTER};

//b)Funktionen
void print_season(enum season s)
{
	switch (s)
	{
		case SPRING:
		{
			printf("spring");
			break;
		}
		case SUMMER:
		{
			printf("summer");
			break;
		}
		case AUTUMN:
		{
			printf("autumn");
			break;
		}
		case WINTER:
		{
			printf("winter");
			break;
		}
	}
}


enum season month2season(int n)
{
	if (n>=3 && n<=5)
		return SPRING;
	else if (n>=6 && n<=8)
		return SUMMER;
	else if (n>=9 && n<=11)
		return AUTUMN;
	else if ((n>=1 && n<=2) || n==12)
		return WINTER;
}


int main()
{
	int n;
	while (scanf("%d", &n)==1)
	{
		print_season(month2season(n));
		printf(",");
	}
	return 0;
}
