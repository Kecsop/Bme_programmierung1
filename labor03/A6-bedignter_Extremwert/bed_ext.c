#include <stdio.h>

int main()
{
    int zahl=0, max_neg=0, min_pos=0;
    while (scanf("%d", &zahl)==1)
    {
        if (zahl!=0)
        {
            if (zahl<0)
            {
                if (zahl>max_neg || max_neg ==0)
                    max_neg=zahl;
            }
            if (zahl>0)
            {
                if (zahl<min_pos || min_pos==0)
                    min_pos=zahl;
            }
        }
    }
    if (max_neg==0 && min_pos==0)
        printf("--- ---");
    else if (max_neg==0 && min_pos!=0)
        printf("--- %d", min_pos);
    else if (max_neg!=0 && min_pos==0)
        printf("%d ---", max_neg);
    else if (max_neg!=0 && min_pos!=0)
        printf("%d %d", max_neg, min_pos);
    return 0;
}
