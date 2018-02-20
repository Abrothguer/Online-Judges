#include <stdio.h>
#include <stdlib.h>

int main(){
   int k, xd, yd, x, y;
   while(1){
      scanf("%d", &k);
      if(!k) break;
      scanf("%d %d", &xd, &yd);
      while(k--){
         scanf("%d %d", &x, &y);
         if(x > xd && y > yd){
            printf("NE\n");
         }
         else if(x > xd && y < yd){
            printf("SE\n");
         }
         else if(x < xd && y < yd){
            printf("SO\n");
         }
         else if(x < xd && y > yd){
            printf("NO\n");
         }
         else{
            printf("divisa\n");
         }
      }
   }
   return 0;
}
