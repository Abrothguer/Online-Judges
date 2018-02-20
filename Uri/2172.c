#include <stdio.h>
#include <stdlib.h>

int main(){
   long long unsigned int xp, t;
   while(1){
      scanf("%llu %llu", &t, &xp);
      if(!t && !xp) break;
      printf("%llu\n", xp*t);
   }
   return 0;
}
