#include <stdio.h>
#include <stdlib.h>

int main(){
   int count;
   long long unsigned int x, y, xor;
   while(1){
      scanf("%llu %llu", &x, &y);
      if(!x && !y) break;
      xor = x^y;
      count = 0;
      //printf("%d\n", xor);
      while(xor != 0){
         if(xor%2 == 1) ++count;
         xor = xor >> 1;
         //printf("xor ls: %d\n", xor);
      }
      printf("%d\n", count);
   }
   return 0;
}
