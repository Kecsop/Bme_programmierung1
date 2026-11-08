#include <stdio.h>

int main(){
    int i=0, n, a;
    scanf("%d", &n);
    a=n;
    while (a!=1)
    {
       if (a%2==0)
           a=a/2;
       else
           a=3*a+1;
       i=i+1;
    }
    printf("%d\n",i);
    return 0;
}
