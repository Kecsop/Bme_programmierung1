#include <stdio.h>
#define N 100

int main()
{
    int zahlen[N];
    int letzte, z;
    for (int i=0; i<N; i++)
        zahlen[i]=0;
    for (int i=0; i<N; i++)
    {
        scanf("%d", &z);
        if (z==0)
        {
            letzte=i;
            break;
        }
        else
            zahlen[i]=z;
    }
    for (int j=letzte-1; j>=0; j--)
    {
        if (zahlen[j]>0)
        //printf("%d ", j);
            printf("%d ", zahlen[j]);
    }
    //printf("\n");
    return 0;
}
