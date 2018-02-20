#include <stdio.h>
#include <stdlib.h>

int main(){
   int c, t, x;
   double res;
   c = t = 0;
   while(getchar() != EOF){
      scanf("%*[^\n]");
      scanf("%d", &x);
      getchar();
      t += x;
      ++c;
   }
   res = t*1.0/c;
   printf("%.1lf\n", res);
   return 0;
}
