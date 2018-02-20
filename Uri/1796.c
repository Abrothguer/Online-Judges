#include <stdio.h>
#include <stdlib.h>

int main(){
   int n, x, z, o, i;
   scanf("%d", &n);
   z = o = 0;
   for(i = 0; i < n; ++i){
      scanf("%d", &x);
      if(x) ++o;
      else ++z;
   }
   if(z > n/2) printf("Y\n");
   else printf("N\n");
   return 0;
}
