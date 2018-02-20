#include <stdio.h>
#include <stdlib.h>

int main(){
   int i, v, t, x;
   scanf("%d %d", &v, &t);
   for(i = 0; i < t; ++i){
      scanf("%d", &x);
      v += x;
      if(v > 100) v = 100;
      else if(v < 0) v = 0;
   }
   printf("%d\n", v);
   return 0;
}
