#include <stdio.h>
#include <stdlib.h>

int main(){
   double j, t, i, p;
   p = 1.0;
   while(scanf("%lf %lf", &i, &t) != EOF){
      j = (t-i)*100/i;
      printf("Projeto %.0lf:\n", p++);
      printf("Percentual dos juros da aplicacao: %.2lf %%\n\n", j);
   }
   return 0;
}
