#include <stdio.h>
#include <stdlib.h>

int main(){
   int i, n, kg, kgt;
   char c, str[10000];
   double x, pt, kgd;
   scanf("%d", &n);
   pt = 0.0;
   kgt = 0;
   for(i = 0; i < n; ++i){
      scanf("%lf", &x);
      pt += x;
      kg = 0;
      while(1){
         scanf("%s", str);
         ++kg;
         if(getchar() == '\n') break;
      }
      kgt += kg;
      printf("day %d: %d kg\n", i+1, kg);
   }
   kgd = kgt*1.0/n;
   pt = pt/n;
   printf("%.2lf kg by day\n", kgd);
   printf("R$ %.2lf by day\n", pt);
   return 0;
}
