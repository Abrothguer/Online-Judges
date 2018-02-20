#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   int i, n, len;
   unsigned long long int sum, panel, mask;
   char str[70];
   scanf("%d", &n);
   while(n--){
      scanf("%s %llu", str, &sum);
      len = strlen(str);
      panel = 0ULL;
      i = 0;
      while(str[i] != '\0'){
         if(str[i] == 'O') panel |= (1ULL << i);
         ++i;
      }
      panel += sum;
      //printf("panel = %llu\n", panel);
      mask = 1ULL;
      for(i = len-1; i >= 0; --i){
         if(mask&panel) putchar('O');
         else putchar('X');
         mask = mask << 1;
      }
      putchar('\n');
   }
   return 0;
}
