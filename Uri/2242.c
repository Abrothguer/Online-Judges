#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void remcons(char str[60]);

int main(){
   int i, len, pl;
   char str[60];
   scanf("%s", str);
   //printf("str = %s\n", str);
   remcons(str);
   //printf("strdps = %s\n", str);
   len = strlen(str);
   pl = 1;
   for(i = 0; i < len/2; ++i){
      if(str[i] != str[len-i-1]){
         pl = 0;
         break;
      }
   }
   if(pl) printf("S\n");
   else printf("N\n");
   return 0;
}

void remcons(char str[60]){
   char *i = str;
   char *j = str;
   while(*j != '\0'){
      *i = *j;
      j++;
      if(*i == 'a' || *i == 'e' || *i == 'i' || *i == 'o' || *i == 'u'){
         i++;
      }
   }
   *i = '\0';
   return;
}
