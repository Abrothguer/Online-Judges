#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
   int i, p, len;
   long long unsigned int ac;
   char pl[70];
   p = 1;
   while(gets(pl)){
      len = strlen(pl);
      ac = 0;
      for(i = 0; i < len; ++i){
         if(pl[i] == 'b'){
            ac += (long long unsigned int) pow(2, (len-1-i));
         }
      }
      printf("Palavra %d\n", p++);
      printf("%llu\n\n", ac);
   }
   return 0;
}
