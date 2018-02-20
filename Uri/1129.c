#include <stdio.h>
#include <stdlib.h>

int main(){
   int vet[5], n, i, blk;
   char res;
   while(1){
      scanf("%d", &n);
      if(!n) break;
      while(n--){
         blk = 0;
         for(i = 0; i < 5; ++i){
            scanf("%d", &vet[i]);
            if(vet[i] <= 127){
               blk++;
               res = 65 + i;
            }
         }
         if(blk != 1) res = '*';
         printf("%c\n", res);
      }
   }
   return 0;
}
