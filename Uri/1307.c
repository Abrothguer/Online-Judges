#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   long unsigned int x, y, mod, a, b;
   int n, i, l1, l2, t = 1;
   char sx[40], sy[40];
   scanf("%d ", &n);
   while(n--){
      gets(sx);
      gets(sy);
      l1 = strlen(sx);
      l2 = strlen(sy);
      x = y = 0UL;
      for(i = 0; i < l1; ++i){
         if(sx[i] == '1') x |= 1UL << (l1-i-1);
      }
      //printf("x = %lu\n", x);
      for(i = 0; i < l2; ++i){
         if(sy[i] == '1') y |= 1UL << (l2-i-1);
      }
      //printf("y = %lu\n", y);
      a = x;
      b = y;
      while(1){
         mod = a%b;
         if(!mod) break;
         a = b;
         b = mod;
      }
      if(b == 1) printf("Pair #%d: Love is not all you need!\n", t++);
      else printf("Pair #%d: All you need is love!\n", t++);
   }
   return 0;
}
