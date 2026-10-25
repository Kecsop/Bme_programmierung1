#include <stdio.h>

int gcd(int a, int b)
{
    if (a-b==1 || a-b==-1)
        return 1;
    while (a!=b)
    {
        if (a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;
}

int relative_primes(int a, int b)
{
    if (gcd(a,b)==1)
        return 1;
    else
        return 0;
}

int main()
{
    int a, b, zahler=0;
    while(scanf("%d%d", &a, &b)==2)
    {
        if (relative_primes(a,b)==1)
            zahler++;
    }
    printf("%d", zahler);
    return 0;
}