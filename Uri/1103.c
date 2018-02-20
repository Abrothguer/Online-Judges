#include <stdio.h>
#include <stdlib.h>

int main(){
   int res, h1, h2, m1, m2;
   while(1){
      scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
      if(!h1 && !h2 && !m1 && !m2) break;
      if(h2 > h1) res = (h2-h1)*60 - m1 + m2;
      else if(h1 > h2) res = abs(24-(h1-h2))*60-m1+m2;
      else{
         if(m2 > m1) res = m2 - m1;
         else res = 24*60 - m1 + m2;
      }
      printf("%d\n", res);
   }
   return 0;
}
