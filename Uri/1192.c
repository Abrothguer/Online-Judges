#include <stdio.h>
#include <stdlib.h>

int main(){
   int n;
   char str[4];
   scanf("%d", &n);
   while(n--){
      scanf("%s", str);
      if(str[0]==str[2]){
         printf("%d\n", (str[0]-'0')*(str[2]-'0'));
      }
      else if(str[1] >= 'A' && str[1] <= 'Z'){
         printf("%d\n", (str[2]-'0')-(str[0]-'0'));
      }
      else{
         printf("%d\n", (str[2]-'0')+(str[0]-'0'));
      }
   }
   return 0;
}
