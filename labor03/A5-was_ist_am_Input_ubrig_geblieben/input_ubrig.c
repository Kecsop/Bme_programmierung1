#include <stdio.h>

int main()
{
    double zahl=0.000, summe=0.000;
    char text;
    while (scanf("%lf", &zahl)==1)
        summe=summe+zahl;
    printf("%0.3f\n", summe);
    while (scanf("%c", &text)==1)
        printf("%c", text);
    printf("\n");
    return 0;
}
