#include <stdio.h>


typedef struct time
{
    unsigned hour, min, sec;
}time;


int time2sec(time t)
{
    return t.hour*3600 + t.min*60+t.sec;
}


time sec2time(int s)
{
    int h, m, neg=0;
    time t0;
    if (s<0)
        neg=1;
    h=(s/3600);
    s=s-h*3600;
    h=h%24;
    m=s/60;
    s=s-m*60;
    //printf("%d\t%d\t%d\n", h, m, s);
    t0.sec=(60+s)%60;
    if (t0.sec==0)
        t0.min=(60+m)%60;
    else
        t0.min=(60+m-neg)%60;
    if (t0.min==0)
        t0.hour=(24+h)%24;
    else
        t0.hour=(24+h-neg)%24;
    return t0;
}


//b)
time timeplus(time a, time b)
{
    int sa, sb;
    sa=time2sec(a);
    sb=time2sec(b);
    return sec2time(sa+sb);
}


int timecmp(time a, time b)
{
    int sa, sb;
    sa=time2sec(a);
    sb=time2sec(b);
    if (sa>sb)
        return 1;
    else if (sa<sb)
        return -1;
    else
        return 0;
}


void timereset(time *t)
{
    (*t).hour=0;
    (*t).min=0;
    (*t).sec=0;
}


int main(void)
{
    time t1 = {2, 5, 0};
    int d = time2sec(t1);       // 7500
    time t2 = sec2time(6002);   // 1:40:02
    time t3 = sec2time(-3600);   // 23:50:00
    printf("\n%d\n", d);
    printf("%d\t", t3.hour);
    printf("%d\t", t3.min);
    printf("%d\n", t3.sec);
    return 0;

    //b)
    time workout_begins = {23, 15, 0};
    time workout_duration = {1, 40, 0};
    time workout_ends = timeplus(workout_begins, workout_duration);
    printf("%d:%d:%d\n", workout_ends.hour, workout_ends.min, workout_ends.sec);
    if (timecmp(workout_ends, workout_begins) < 0)
        printf("Hamarabb van vege, mint mikor kezdodik\n");

    //c)
    timereset(&workout_begins);

    return 0;
}
