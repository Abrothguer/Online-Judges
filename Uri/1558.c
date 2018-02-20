#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
   int n, m1, m2, rt, flag;
   while(scanf("%d", &n) != EOF){
      rt = sqrt(n);
      flag = 0;
      if(n >= 0){
         if(n == 0 || n == 1) flag = 1;
         for(m1 = 0; m1 <= rt; ++m1){
            for(m2 = 0; m2 <= rt; ++m2){
               if(m1*m1 + m2*m2 == n){
                  flag = 1;
                  break;
               }
            }
         }
      }
      if(flag) printf("YES\n");
      else printf("NO\n");
   }
   return 0;
}
