#include <stdio.h>
#include <stdlib.h>

int main(){
   int va[100000] = {0}, vpos[100000] = {0}, ci, a, b, cj, i, x, prev, cn;
   while(1){
      scanf("%d %d", &a, &b);
      if(!a && !b) break;
      prev = cn = 0;
      ci = a;
      cj = b;
      for(i = 0; i < a; ++i){
         scanf("%d", &x);
         if(x != prev){
            //printf("%d\n", x);
            ++va[x];
            vpos[cn] = x;
            ++cn;
         }
         else --ci;
         prev = x;
      }
      prev = 0;
      for(i = 0; i < b; ++i){
         scanf("%d", &x);
         if(x != prev){
            if(va[x] != 0){
               --ci;
               --cj;
            }
         }
         else --cj;
         prev = x;
      }

      if(ci <= cj) printf("%d\n", ci);
      else printf("%d\n", cj);
      for(i = 0; i < cn; ++i){
         //printf("%d ", vpos[i]);
         va[vpos[i]] = 0;
      }
   }
   return 0;
}
