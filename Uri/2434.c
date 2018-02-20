#include <stdio.h>
#include <stdlib.h>

int main(){
   int n, s, i, min, x;
   scanf("%d %d", &n, &s);
   min = s;
   for(i = 0; i < n; ++i){
      scanf("%d", &x);
      s += x;
      if(s < min) min = s;
   }
   printf("%d\n", min);
   return 0;
}
