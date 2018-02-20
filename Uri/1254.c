#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
   int n, i, j, len, open, tglen, same;
   char str[60], tag[11];
   while(gets(tag)){
      //printf("***tag = %s ", tag);
      scanf("%d ", &n);
      //printf("***n = %d ", n);
      gets(str);
      //printf("***str = %s\n", str);
      open = 0;
      len = strlen(str);
      tglen = strlen(tag);
      for(i = 0; i < len; ++i){
         if(str[i] == '<') open = 1;
         else if(str[i] == '>') open = 0;
         if(open && tolower(str[i]) == tolower(tag[0])){
            same = 1;
            for(j = 0; j < tglen; ++j){
               if(tolower(tag[j]) != tolower(str[i+j])){
                  same = 0;
                  break;
               }
            }
            if(same){
               printf("%d", n);
               i += tglen-1;
            }
            else printf("%c", str[i]);
         }
         else{
            printf("%c", str[i]);
         }
      }
      printf("\n");
   }
   return 0;
}
