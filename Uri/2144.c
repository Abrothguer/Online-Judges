#include <stdio.h>
#include <stdlib.h>

int main(){
   int w1, w2, r, n;
   double be, bd, m, mf;
   mf = 0.0;
   n = 0;
   while(1){
      scanf("%d %d %d", &w1, &w2, &r);
      if(!w1 && !w2 && !r){
         if(mf/n > 40) printf("\nAqui nois constroi fibra rapaz! Nao e agua com musculo!\n");
         break;
      }
      be = w1*(1.0 + r/30.0);
      bd = w2*(1.0 + r/30.0);
      m = (bd+be)/2.0;
      mf += m;
      ++n;
      if(m > 60) printf("AQUI E BODYBUILDER!!\n");
      else if(m >= 40) printf("Ta saindo da jaula o monstro!\n");
      else if(m >= 14) printf("Bora, hora do show! BIIR!\n");
      else if(m >= 13) printf("E 13\n");
      else printf("Nao vai da nao\n");
   }
   return 0;
}
