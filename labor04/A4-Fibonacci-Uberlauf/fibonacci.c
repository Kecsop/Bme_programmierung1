//L04A4-Fibonacci-Uberlauf
#include <stdio.h>

int main()
{
	unsigned long long int fibonacci[100];
	int l=sizeof(fibonacci)/sizeof(fibonacci[0]);
	int max=1;
	//unsigned long long zahl;
	if (scanf("%llu %llu", &fibonacci[0], &fibonacci[1])!=2)
		return 1;
	for (int i=2; i<l; i++)
	{
		fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
		if (fibonacci[i]<fibonacci[i-2] || fibonacci[i]<fibonacci[i-1])
			break;
		else
			max=i;
	}
	printf("%d\n", max);
	return 0;
}
