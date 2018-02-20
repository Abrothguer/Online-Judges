#include <stdio.h>
#include <stdlib.h>

int main(){
   int win = 1;
   long int n, i, m;
   scanf("%ld %ld", &n, &m);
   long int vet[n];
   for(i = 0; i < n; ++i){
      scanf("%d", &vet[i]);
      if(i && vet[i] - vet[i-1] > m){
         win = 0;
         break;
      }
   }
   if(42195 - vet[n-1] > m) win = 0;
   if(win) printf("S\n");
   else printf("N\n");
   return 0;
}
