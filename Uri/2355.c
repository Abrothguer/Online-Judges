#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
   long long unsigned int min, a, b;
   while(1){
      scanf("%llu", &min);
      if(min == 0) break;
      a = ceil(min*7.0/90.0);
      b = floor(min/90.0);
      printf("Brasil %llu x Alemanha %llu\n", b, a);
   }
   return 0;
}
