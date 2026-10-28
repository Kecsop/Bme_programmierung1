#include <stdio.h>


typedef struct time
{
    unsigned hour, min, sec;
}time;


unsigned time2sec(time t)
{
    return t.hour*3600 + t.min*60+t.sec; 
}


time sec2time(int s)
{
    int h=(s/3600)%24;
    int m=

}