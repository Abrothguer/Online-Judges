#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   int n, len, lenm = 0, t = 0, g = 0;
   char str[200], strm[200], c;
   while(1){
      if(!g){
         scanf("%s", str);
         c = getchar();
         if(c != ' ') g = 1;
         if(strcmp(str, "0") == 0) break;
         else{
            len = strlen(str);
            if(len >= lenm){
               strcpy(strm, str);
               lenm = len;
            }
            if(t) printf("-");
            else t = 1;
            printf("%d", len);
         }
      }
      else{
         g = 0;
         printf("\n");
         t = 0;
      }
   }
   printf("\nThe biggest word: %s\n", strm);
   return 0;
}
