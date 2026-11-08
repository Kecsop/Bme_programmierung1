#include <stdio.h>


void minmax(double *zahlen, int sz, double *min, double *max)
{
    *min=zahlen[0];
    *max=zahlen[0];
    int i;
    for (i=0; i<sz; i++)
    {
        *min = *min<zahlen[i] ? *min:zahlen[i];
        *max = *max>zahlen[i] ? *max:zahlen[i];
    }
}


int main()
{
    double zahlen[]={1.3, -2, 5, 23};
    int sz=sizeof(zahlen)/sizeof(zahlen[0]);
    double min, max;
    minmax(zahlen, sz, &min, &max);
    printf("%lf %lf", min, max);
    return 0;
}
