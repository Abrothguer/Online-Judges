#include <stdio.h>
#include <stdlib.h>

int main(){
   int i, n, x, vet[2000] = {0}, max = 0;
   scanf("%d", &n);
   //printf("n = %d\n", n);
   //for(i = 0; i < n; ++i) vet[i] = 0;
   for(i = 0; i < n; ++i){
      scanf("%d", &x);
      ++vet[x];
      if(x > max) max = x;
   }
   for(i = 0; i < max+1; ++i){
      if(vet[i]){
         printf("%d aparece %d vez(es)\n", i, vet[i]);
      }
   }
   return 0;
}
