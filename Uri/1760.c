#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
   double a, n;
   while(scanf("%lf", &n) != EOF){
      a = (n*n*sqrt(3.0)/4.0)*(8.0/5.0);
      printf("%.2lf\n", a);
   }
   return 0;
}
