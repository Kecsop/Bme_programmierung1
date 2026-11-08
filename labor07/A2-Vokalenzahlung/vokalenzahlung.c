#include <stdio.h>


int is_vowel(char a)
{
    char vokale[]={'A','a','E','e','I','i','O','o','U','u'};
    int i, l=sizeof(vokale)/sizeof(vokale[0]);
    for (i=0; i<l; i++)
    {
        if (a==vokale[i])
            return 1;
    }
    return 0;
}


int count_vowels(char *a)
{
    unsigned zahler=0;
    int i=0;
    while (a[i]!='\0')
    {
        //if (a[i]=='\n')
        //    break;
        zahler+=is_vowel(a[i]);
        i++;
    }
    return zahler;
}


int main()
{
    char text[]="uborkaleves";
    int l, anzahl;
    l=sizeof(text)/sizeof(text[0]);
    anzahl=count_vowels(text);
    printf("%d\n", anzahl);
    puts("vege");
}
