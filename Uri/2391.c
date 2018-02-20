#include <stdio.h>
#include <stdlib.h>

int main(){
   int i, n, r, pts, x, prev, flg;
   scanf("%d", &n);
   r = pts = prev = flg = 0;
   for(i = 0; i < n; ++i){
      scanf("%d", &x);
      if(!flg && i){
         r = x-prev;
         flg = 1;
      }
      else if(x-prev != r && i){
         flg = 0;
         ++pts;
      }
      prev = x;
   }
   ++pts;
   printf("%d\n", pts);
   return 0;
}
