#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   int i, n, len, j;
   char str[100100], stck[100100];
   scanf("%d", &n);
   getchar();
   while(n--){
      gets(str);
      len = strlen(str);
      i = j = 0;
      if(str[i] == '\0') j = 1;
      while(str[i] != '\0'){
         if(str[i] == '(') stck[j++] = '(';
         else if(str[i] == '[') stck[j++] = '[';
         else if(str[i] == '{') stck[j++] = '{';
         else if(str[i] == ')'){
            if(stck[j-1] != '('){
               j = 1;
               break;
            }
            else if (j > 0) --j;
         }
         else if(str[i] == ']'){
            if(stck[j-1] != '['){
               j = 1;
               break;
            }
            else if (j > 0) --j;
         }
         else if(str[i] == '}'){
            if(stck[j-1] != '{'){
               j = 1;
               break;
            }
            else if (j > 0) --j;
         }
         ++i;
      }
      if(j) printf("N\n");
      else printf("S\n");
   }
   return 0;
}
