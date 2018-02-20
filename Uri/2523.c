#include <stdio.h>
#include <stdlib.h>

int main(){
   int n, i, x;
   char alpha[27];
   while(gets(alpha)){
      scanf("%d", &n);
      for(i = 0; i < n; ++i){
         scanf("%d", &x);
         printf("%c", alpha[x-1]);
      }
      printf("\n");
      getchar();
   }
   return 0;
}
