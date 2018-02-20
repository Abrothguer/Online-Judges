#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   char str[110];
   int spc, i, j, len;
   while(gets(str)){
      spc = 0;
      len = strlen(str);
      for(i = 0; i < len; ++i){
         for(j = 0; j < spc; ++j) printf(" ");
         for(j = 0; j < len-spc; ++j){
            if(j != len-spc-1) printf("%c ", str[j]);
            else printf("%c\n", str[j]);
         }
         ++spc;
      }
      printf("\n");
   }
   return 0;
}
