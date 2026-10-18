#include <stdio.h>

int main()
{
    int noten[5];
    int l=sizeof(noten)/sizeof(noten[0]);
    int n;
    for (int i=0; i<l; i++)
        noten[i]=0;
    while (scanf("%d", &n)==1)
    {
        noten[n-1]=noten[n-1]+1;
        }
    for (int i=l-1; i>=0; i--)
    {
        printf("%d: %d pcs\n", i+1, noten[i]);
    }
    return 0;
}
