#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#define pi M_PI

typedef struct cylinder
{
    double radius, height;
} cylinder;


cylinder read_cylinder()
{
    double r, h;
    scanf("%lf%lf" &r, &h);
    cylinder c={r, h};
    return c;
}


double cylinder_volume(cylinder c)
{
    double v=c.radius * c.radius * pi * c.height;
    return v;
}

int main()
{
    return 0;
}