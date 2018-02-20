#include <stdio.h>
#include <stdlib.h>

int main(){
   long long unsigned int x, y, xor;
   while(scanf("%llu %llu", &x, &y) != EOF){
      xor = x ^ y;
      printf("%llu\n", xor);
   }
   return 0;
}
