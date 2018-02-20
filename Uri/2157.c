#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inttostr(int n, char str[6]){
   int i, aux = n;
   i = 0;
   while(aux > 0){
      str[i++] = aux%10 + '0';
      //printf("str %c \n", str[i-1]);
      aux /= 10;
   }
   str[i] = '\0';
   //printf("str = %s\n");
   return;
}

int main(){
   int t, i, f, aux;
   char str[6];
   scanf("%d", &t);
   while(t--){
      scanf("%d %d", &i, &f);
      for(aux = i; aux <= f; ++aux) printf("%d", aux);
      for(aux = f; aux >= i; --aux){
         inttostr(aux, str);
         printf("%s", str);
      }
      printf("\n");
   }
   return 0;
}
