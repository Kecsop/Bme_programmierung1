#include <stdio.h>
#include <stdlib.h>


int main(void) {
   int x, s, v;
   scanf("%d", &x);
   x=abs(x);
   s=6*x*x;
   v=x*x*x;
   printf("The side of the cube is %d m\n", x);
   printf("The surface of the cube is %d m2\n", s);
   printf("The volume of the cube is %d m3\n", v);
   return 0;
}
