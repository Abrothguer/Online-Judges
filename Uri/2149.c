#include <stdio.h>
#include <stdlib.h>

long long unsigned int phil[20] = {0ULL};

long long unsigned int philpd(int i){
   if(phil[i] != 0 || i == 0){
      return phil[i];
   }
   else{
      if(i%2 == 0) phil[i] = philpd(i-1)+philpd(i-2);
      else phil[i] = philpd(i-1)*philpd(i-2);
      return phil[i];
   }
}

int main(){
   int n;
   phil[1] = 1ULL;
   while(scanf("%d", &n) != EOF){
      printf("%llu\n", philpd(n-1));
   }
   return 0;
}
