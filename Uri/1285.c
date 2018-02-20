#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   int num1, num2, i, j,tots, nnow, rep, len;
   char str[5];
   while(scanf("%d %d", &num1, &num2) != EOF){
      nnow = num1;
      tots = 0;
      while(nnow <= num2){
         sprintf(str, "%d", nnow);
         rep = 0;
         len = strlen(str);
         //printf("your str = %s\n", str);
         for(i = 0; i < len; ++i){
            for(j = i+1; j < len; ++j){
               if(str[i] == str[j]){
                  rep = 1;
               }
            }
         }
         if(!rep) ++tots;
         ++nnow;
      }
      printf("%d\n", tots);
   }
   return 0;
}
