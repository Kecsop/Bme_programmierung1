#include <stdio.h>

int hexa_value(char a)
{
	if (a>='0' && a<='9')
		return a-'0';
	else if (a>='A' && a<='F')
		return a-'A'+10;
	else if (a>='a' && a<='f')
		return a-'a'+10;
	else
		return -1;
}

int main()
{
	unsigned long dec=0, hexa;
	char a;
	while (scanf("%c", &a)==1)
	{
		//puts("amig");
		if (a=='\n')
			//dec=dec/16;
			break;
		hexa=hexa_value(a);
		if (hexa<0)
			break;
		dec=(dec+hexa)*16;
		//printf("%d\t%d\t%d\t%d\n", hexa,dec,a, dec+a);
	}
	printf("%lu\n", dec/16);
	return 0;
}
