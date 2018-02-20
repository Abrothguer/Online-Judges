#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   long long int len, f, i;
   char str[20];
   while(scanf("%s", str) && str[0] != '0'){
      getchar();
      i = len = 0LL;
      while(str[i] != '\0') ++len, ++i;
      f = 1LL;
      for(i = 1LL; i <= len; ++i){
         f *= i;
      }
      printf("%lld\n", f);
   }
   return 0;
}
