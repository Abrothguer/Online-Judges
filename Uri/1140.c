#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
   int test, i;
   char str[1200], taut;
   while(1){
      gets(str);
      if(!strcmp(str, "*")) break;
      taut = ' ';
      i = test = 0;
      while(str[i] != '\0'){
         if(taut == ' ') taut = tolower(str[i]);
         else if(str[i] == ' ' && (str[i+1] != '\0' && str[i+1] != ' ')) test = 1;
         else if(test){
            if(tolower(str[i]) != taut) break;
            test = 0;
         }
         ++i;
      }
      if(test) printf("N\n");
      else printf("Y\n");
   }
   return 0;
}
