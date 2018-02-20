#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
   int t, c, hp, at, df, sp, lv, bs, iv, ev;
   char name[50];
   scanf("%d", &t);
   c = t;
   while(t--){
      scanf("%s %d", name, &lv);
      scanf("%d %d %d", &bs, &iv, &ev);
      hp = (iv + bs + sqrt(ev)/8 + 50)*lv/50 +10;
      scanf("%d %d %d", &bs, &iv, &ev);
      at = (iv + bs + sqrt(ev)/8)*lv/50 +5;
      scanf("%d %d %d", &bs, &iv, &ev);
      df = (iv + bs + sqrt(ev)/8)*lv/50 +5;
      scanf("%d %d %d", &bs, &iv, &ev);
      sp = (iv + bs + sqrt(ev)/8)*lv/50 +5;

      printf("Caso #%d: %s nivel %d\n", c-t, name, lv);
      printf("HP: %d\n", hp);
      printf("AT: %d\n", at);
      printf("DF: %d\n", df);
      printf("SP: %d\n", sp);
   }
   return 0;
}
