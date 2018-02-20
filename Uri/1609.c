#include <stdio.h>
#include <stdlib.h>

int main(){
   int t, n, i, j, rep;
   scanf("%d", &t);
   while(t--){
      scanf("%d", &n);
      long long int vet[n];
      rep = 0;
      for(i = 0; i < n; ++i){
         scanf("%lld", &vet[i]);
         for(j = 0; j < i; ++j){
            if(vet[i] == vet[j]){
               ++rep;
               break;
            }
         }
      }
      printf("%d\n", n-rep);
   }
   return 0;
}
