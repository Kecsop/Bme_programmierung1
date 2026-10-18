#include <stdio.h>
#include <float.h>
#include <math.h>

int main()
{
	int i=0;
	double a, x, eps=10*DBL_EPSILON;
	if (scanf("%lf%lf", &a, &x)!=2)
	{
		//puts("hiba");
		return 1;
	}
	//puts("do elott");
	do{
		//puts("do");
		//x=x/2+a/(2*x);	
		printf("%d %.16E\n", i, x);
		x=x/2+a/(2*x);
		i++;
	}while (fabs(x*x-a)/a>eps);
	printf("%d %.16E\n", i, x);
	//puts("vege");

	return 0;
}
