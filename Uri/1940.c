#include <stdio.h>
#include <stdlib.h>

int main(){
   int pj[500] = {0}, jog, rod, x, mpos, m, j, i;
   scanf("%d %d", &jog, &rod);
   for(i = 0; i < rod; ++i){
      for(j = 0; j < jog; ++j){
         scanf("%d", &x);
         pj[j] += x;
      }
   }
   m = 0;
   for(i = 0; i < jog; ++i){
      if(pj[i] >= m){
         m = pj[i];
         mpos = i;
      }
   }
   printf("%d\n", mpos+1);
   return 0;
}
