#include <stdio.h>
#include <stdlib.h>

int main(){
   long long unsigned int fin, x, n, i;
   while(1){
      scanf("%llu", &n);
      if(n == 0) break;
      fin = 0;
      for(i = 0; i < n; ++i){
         scanf("%llu", &x);
         fin = fin ^ x;
      }
      printf("%llu\n", fin);
   }
   return 0;
}
