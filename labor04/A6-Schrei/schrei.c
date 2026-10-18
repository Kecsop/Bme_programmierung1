#include <stdio.h>

int main()
{
	char a;
	int gross=0, erste=1;	//ob der Wort grossgerschieben werden soll und ob 
	while (scanf("%c", &a)==1)
	{
		if (a==0x20 || a=='\n')
		{
			erste=1;
			gross=0;
			printf("%c", a);
			continue;
		}
		if (erste==1)
		{
			if (a>='A' && a<='Z')
				gross=1;
			else
				gross=0;
			erste=0;
		}			
		if (gross==1 && a>='a' && a<='z')
			a=a-('a'-'A');
		printf("%c", a);
	}
	//puts("");
	return 0;
}
