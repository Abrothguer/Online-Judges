#include <stdio.h>
#include <stdlib.h>

int main(){
   int i, n, a, b, pa, pb;
   while(1){
      scanf("%d", &n);
      if(!n) break;
      pa = pb = 0;
      for(i = 0; i < n; ++i){
         scanf("%d %d", &a, &b);
         if(a > b) ++pa;
         else if(b > a) ++pb;
      }
      printf("%d %d\n", pa, pb);
   }
   return 0;
}
