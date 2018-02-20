#include <stdio.h>
#include <stdlib.h>

int main(){
   int i, j, n, m, esp, t = 4;
   long long x;
   scanf("%d", &n);
   while(n--){
      scanf("%d", &m);
      long long unsigned mat[m][m];
      long long unsigned vet[m];
      int pos[m];
      for(i = 0; i < m; ++i) vet[i] = 0ULL;

      for(i = 0; i < m; ++i){
         for(j = 0; j < m; ++j){
            scanf("%llu", &x);
            x = x*x;
            mat[i][j] = x;
            if(x > vet[j]) vet[j] = x;
         }
      }
      for(i = 0; i < m; ++i){
         //printf("vet[%d] = %llu e ", i, vet[i]);
         esp = 0;
         while(vet[i]!=0 && ++esp) vet[i] /= 10;
         pos[i] = esp;
         //printf("esp col %d = %d\n", i, esp);
      }
      printf("Quadrado da matriz #%d:\n", t++);
      for(i = 0; i < m; ++i){
         for(j = 0; j < m; ++j){
            printf("%*llu", pos[j], mat[i][j]);
            if(j != m-1) printf(" ");
         }
         printf("\n");
      }
      if(n) printf("\n");
   }
   return 0;
}
