#include <stdio.h>
#include <stdlib.h>

int main(){
   int a, c, i, prev, cur, p;
   while(1){
      scanf("%d %d", &a, &c);
      if(!a && !c) break;
      prev = a;
      p = 0;
      for(i = 0; i < c; ++i){
         scanf("%d", &cur);
         if(cur < prev) p += prev-cur;
         prev = cur;
      }
      printf("%d\n", p);
   }
   return 0;
}
