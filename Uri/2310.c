#include <stdio.h>
#include <stdlib.h>

int main(){
   int i, n, st, bt, at, ss, bs, as, aux1, aux2, aux3;
   scanf("%d", &n);
   st = bt = at = ss = bs = as = 0;
   for(i = 0; i < n; ++i){
      scanf("%*s %d %d %d", &aux1, &aux2, &aux3);
      st += aux1;
      bt += aux2;
      at += aux3;
      scanf("%d %d %d", &aux1, &aux2, &aux3);
      ss += aux1;
      bs += aux2;
      as += aux3;
   }
   //printf("%d %d %d %d %d %d\n", st, bt, at, ss, bs, as);
   double s, b, a;
   s = ss*100.0/st;
   b = bs*100.0/bt;
   a = as*100.0/at;
   printf("Pontos de Saque: %.2lf %%.\n", s);
   printf("Pontos de Bloqueio: %.2lf %%.\n", b);
   printf("Pontos de Ataque: %.2lf %%.\n", a);
   return 0;
}
