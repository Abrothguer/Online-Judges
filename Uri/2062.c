#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   int i, n;
   char str[30];
   scanf("%d", &n);
   for(i = 0; i < n; ++i){
      scanf("%s", str);
      if(str[0] == 'O' && str[1] == 'B' && str[2] != ' ' && str[3] == '\0'){
         printf("OBI");
      }
      else if(str[0] == 'U' && str[1] == 'R' && str[2] != ' ' && str[3] == '\0'){
         printf("URI");
      }
      else{
         printf("%s", str);
      }
      if(i < n-1) printf(" ");
      else printf("\n");
   }
   return 0;
}
