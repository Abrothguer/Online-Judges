#include <stdio.h>
#include <stdlib.h>

int main(){
   int n, i;
   scanf("%d", &i);
   while(i--){
      scanf("%d", &n);
      if(n%2 == 0) printf("1\n");
      else printf("9\n");
   }
   return 0;
}
