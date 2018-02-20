#include <stdio.h>
#include <stdlib.h>

void printmat(int n, int x, int y){
   int i, j;
   for(i = 0; i < n; ++i){
      for(j = 0; j < n; ++j){
         if(i == x && j == y) printf("X");
         else printf("O");
      }
      printf("\n");
   }
   printf("@\n");
   return;
}

int main(){
   int n, i, j, aux, rt, up, dw, lf, inc;
   while(1){
      scanf("%d", &n);
      if(!n) break;
      i = j = n/2;
      printmat(n, i, j);
      rt = 1;
      dw = up = lf = 0;
      aux = inc = 1;
      while(i != n-1 || j != n-1){
         if(rt){
            ++j;
            --aux;
            if(!aux) aux = inc, rt = 0, up = 1;
         }
         else if(up){
            --i;
            --aux;
            if(!aux) ++inc, aux = inc, up = 0, lf = 1;
         }
         else if(lf){
            --j;
            --aux;
            if(!aux) aux = inc, lf = 0, dw = 1;
         }
         else if(dw){
            ++i;
            --aux;
            if(!aux) ++inc, aux = inc, dw = 0, rt = 1;
         }
         printmat(n, i, j);
         //system("pause");
      }
   }
   return 0;
}
