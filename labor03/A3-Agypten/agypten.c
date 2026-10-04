#include <stdio.h>

int main(){
    int zahler, nenner, z, n1, n2;
    scanf("%d%d", &zahler, &nenner);
    z=zahler;
    n1=nenner;
    //printf("%d %d\n\n", z, n1);
    while (z!=0)
    {
        n2=(n1+z-1)/z;
        printf("%d ", n2);
        z=z*n2-n1;
        n1=n1*n2;
    }
    return 0;
}
