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


int main()
{
    printf("%d", is_vowel('e'));
}
