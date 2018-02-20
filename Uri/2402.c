#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
   int p = 0;
   long long int x, rt, d, i;
   scanf("%lld", &x);
   if(x == 2 || x == 1) p = 0;
   else if(x%2 == 0) p = 1;
   else{
      d = sqrt(x);
      for(i = 3; i <= d; i+=2){
         if(x%i==0){
            p = 1;
            break;
         }
      }
   }
   if(p) printf("S\n");
   else printf("N\n");
   return 0;
}
