#include <stdio.h>

/* nem megy
int remove_zeros(int *zahlen, int lange)
//soll alle Elemente des Arrays, die gleich Null sind entfernen und die lange
//des neuen Arrays mit den Elementen die nicht gleich Null sind zuruckgeben
{
    int anzahl=0, i, j;
    for(i=0; i<lange; i++)
    {
        //printf("%d ", zahlen[i]);
        if (zahlen[i]==0)
        {
            printf("%d %d %d\n", i, zahlen[i], zahlen[i+1]);
            for (j=i; j<lange-anzahl; j++)
            {
                printf("%d %d %d\n", j, zahlen[j], zahlen[j+1]);
                zahlen[j]=zahlen[j+1];
            }
        }
        else
            anzahl++;
    }
    return j;
}
*/


int remove_zeros(int *zahlen, int lange)
{
    int anzahl=0, i, j=0;
    for (i=0; i<lange; i++)
    {
        if (zahlen[i]!=0)
        {
            zahlen[j]=zahlen[i];
            j++;
        }
    }
    return j;
}


int main()
{
    //int xs[]={1,0,2,0,3,0,7};
    int xs[]={0,7};
    int lxs=sizeof(xs)/sizeof(xs[0]);
    int x=remove_zeros(&xs[0], lxs);
    //printf("\n%d\n\n", x);
    for (int i=0; i<x; i++)
        printf("%d ", xs[i]);
    //puts("");
    return 0;
}
