#include <stdio.h>
#include <stdlib.h>

int main(){
   int count, i, n, alpha[26] = {0};
   char str[2000];
   scanf("%d", &n);
   while(n--){
      getchar();
      scanf("%[^\n]", str);
      i = count = 0;
      while(str[i] != '\0'){
         //printf("%c", str[i]);
         if(str[i] != ',' && str[i] != ' '){
            if(alpha[str[i]-97] == 0){
               alpha[str[i]-97] = 1;
               ++count;
            }
         }
         ++i;
      }
      if(count == 26) printf("frase completa\n");
      else if(count >= 13) printf("frase quase completa\n");
      else printf("frase mal elaborada\n");
      for(i = 0; i < 26; ++i) alpha[i] = 0;
   }
   return 0;
}
