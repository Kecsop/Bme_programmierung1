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
	char s;
	s='3'-'0';
	printf("%c", s);
	scanf("%c", &s);
	printf("%d\n", hexa_value(s));
	return 0;
}
