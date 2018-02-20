#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   int i, len, j, lenv;
   char str[2000];
   char val[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
   lenv = strlen(val);
   //printf("lenv = %d", lenv);
   while(scanf("%[^\n]", str) != EOF){
      len = strlen(str);
      for(i = 0; i < len; ++i){
         if(str[i] != ' '){
            for(j = 0; j < lenv; ++j){
               //printf("%c\n", val[j]);
               if(str[i] == val[j]){
                  //printf("str = %c e val =%c e val-1 = %c", str[i], val[j], val[j-1]);
                  str[i] = val[j-1];
                  break;
               }
            }
         }
      }
      getchar();
      printf("%s\n", str);
   }
   return 0;
}
