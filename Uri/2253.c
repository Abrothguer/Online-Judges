#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   int i, len, mai, min, num, win;
   char str[100];
   while(gets(str)){
      len = strlen(str);
      mai = min = num = 0;
      if(len < 6 || len > 32) win = 0;
      else{
         for(i = 0; i < len; ++i){
            if(str[i] >= 'A' && str[i] <= 'Z') mai = 1;
            else if(str[i] >= 'a' && str[i] <= 'z') min = 1;
            else if(str[i] >= '0' && str[i] <= '9') num = 1;
            else{
               mai = min = num = 0;
               break;
            }
         }
         if(mai && min && num) win = 1;
         else win = 0;
      }
      if(win) printf("Senha valida.\n");
      else printf("Senha invalida.\n");
   }
   return 0;
}
