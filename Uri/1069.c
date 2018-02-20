#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   int i, j, d, t, len;
   char str[1100], stack[1100];
   scanf("%d", &t);
   getchar();
   while(t--){
      gets(str);
      len = strlen(str);
      j = d = 0;
      for(i = 0; i < len; ++i){
         if(str[i] == '<') stack[j++] = '<';
         else if(str[i] == '>' && j != 0) --j, ++d;
      }
      //if(str[0] == '\0') d = 1;
      printf("%d\n", d);
   }
   return 0;
}
