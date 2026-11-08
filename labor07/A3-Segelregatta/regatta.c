#include <stdio.h>
#include <math.h>
#include <stdlib.h>


typedef struct{
    double x, y;
} point;


typedef struct{
    int hour, minute, second;
} time;


typedef struct{
    point position;
    time interval;
}record;


int in_seconds(time zeit_int)
{
    return zeit_int.hour*3600 + zeit_int.minute*60 + zeit_int.second;
}


double distance(point p1, point p2)
{
    double dx, dy;
    dx=fabs(p1.x-p2.x);
    dy=fabs(p1.y-p2.y);
    return sqrt(pow(dx,2)+pow(dy,2));
}


double average_speed(record *aufzeichnungen, int l)
{
    double v=0.0, s=0.0;
    int i, j, t=0;
    point p1, p2;
    time st;
    for (i=0; i<l-1; i++)
    {
        p1=aufzeichnungen[i].position;
        p2=aufzeichnungen[i+1].position;
        st=aufzeichnungen[i+1].interval;
        s+=distance(p1, p2);
        t+=in_seconds(st);
    }
    return s/t;
}


int main()
{
    record log[]={{{42, 455.5}, {20, 1, 0}}, {{272, -48.5}, {0, 4, 37}}, {{272, 3275.5}, {0, 13, 51}}};
    int llog=sizeof(log)/sizeof(log[0]);
    double v_d=average_speed(log, llog);
    printf("%lf", v_d);
    return 0;
}
