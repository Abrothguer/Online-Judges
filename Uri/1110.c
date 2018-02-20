#include <stdio.h>
#include <stdlib.h>

int main(){
   int n, ans, i, v[120], j;
   while(1){
      scanf("%d", &n);
      if(!n) break;
      for(i = 1; i <= n; ++i){
         v[i-1] = i;
      }
      printf("Discarded cards:");
      i = 0;
      j = n--;
      if(!n) printf("\n");
      while(n){
         if(n-1) printf(" %d,", v[i]);
         else printf(" %d\n", v[i]);
         v[j] = v[i+1];
         i += 2;
         ++j;
         --n;
      }
      printf("Remaining card: %d\n", v[i]);
   }
   return 0;
}
