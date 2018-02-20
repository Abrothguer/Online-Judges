#include <stdio.h>
#include <stdlib.h>

int main(){
   int i, n, pos, flag, r, vet[10000] = {0};
   while(scanf("%d %d", &n, &r) != EOF){
      for(i = 0; i < r; ++i){
         scanf("%d", &pos);
         ++vet[pos-1];
      }
      flag = 1;
      for(i = 0; i < n; ++i){
         if(vet[i]) vet[i] = 0;
         else{
            printf("%d ", i+1);
            flag = 0;
         }
      }
      if(flag) printf("*");
      printf("\n");
   }
   return 0;
}
