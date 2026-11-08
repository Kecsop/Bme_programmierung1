#include <stdio.h>


typedef struct imperial
{
    /*1 Fuss=12 zoll=0,3048m*/
    unsigned foot, inch;
} imperial;


double imperial_to_metric(imperial i)
{
    double m=i.foot * .3048 + i.inch * .3048/12;
    return m;
}


imperial plus(imperial i1, imperial i2)
{
    unsigned f=i1.foot+i2.foot+(i1.inch+i2.inch)/12, i=(i1.inch+i2.inch)%12;
    imperial i3={f, i};
    return i3;
}


int main()
{
    unsigned f, i;
    while (scanf("%d%d", &f, &i)==2)
    {
        imperial imp={f,i};
        printf("%.4lf ", imperial_to_metric(imp));
    }
    return 0;
}