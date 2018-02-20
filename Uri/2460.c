#include <stdio.h>
#include <stdlib.h>

int fila[100000]={0}, pes[50000]={0};

int main(){
   int i, n, m, x, s;
   scanf("%d", &n);
   for(i = 0; i < n; ++i){
      scanf("%d", &pes[i]);
      ++fila[pes[i]];
   }
   scanf("%d", &m);
   for(i = 0; i < m; ++i){
      scanf("%d", &x);
      fila[x] = 0;
   }
   s = 0;
   for(i = 0; i < n; ++i){
      if(fila[pes[i]]){
         if(s) printf(" %d", pes[i]);
         else{
            printf("%d", pes[i]);
            s ^= 1;
         }
      }
   }
   printf("\n");
   return 0;
}
