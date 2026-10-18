#include <stdio.h>

int main()
{
    int k, g, b=0;
    scanf("%d %d", &k, &g);
    switch (k)
    {
        case 0: b=0;
            break;
        case 1: b=1000;
            break;
        case 2: b=g*0.1;
            break;
        case 3: b=g*0.1+1000;
            break;
        default: printf("INVALID\n");
            break;
    }
    printf("Bonus: %d EUR", b);
    return 0;
}
