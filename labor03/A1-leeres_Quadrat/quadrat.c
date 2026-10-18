#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    for (int i=1; i<=a; i=i+1)
    {
        if (i==1 || i==a)
        {
            for (int j=1; j<=a; j=j+1)
                printf("x");
            printf("\n");
        }
        else
        {
            printf("x");
            for (int j=1; j<=a-2; j=j+1 )
                printf(".");
            printf("x\n");
        }
    }
    return 0;
}
