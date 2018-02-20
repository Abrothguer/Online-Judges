#include <stdio.h>
#include <stdlib.h>

int main(){
   long long unsigned int i, j, t, n, vet[11000], m, x, q, c1, c2, op, qt;
   scanf("%llu", &t);
   while(t--){
      scanf("%llu", &n);
      for(i = 0; i < n; ++i){
         scanf("%llu", &m);
         vet[i] = 0ULL;
         for(j = 0; j < m; ++j){
            scanf("%llu", &x);
            vet[i] |= (1ULL << x);
         }
         //printf("c = %llu\n", vet[i]);
      }
      scanf("%llu", &q);
      while(q--){
         qt = 0;
         scanf("%llu %llu %llu", &op, &c1, &c2);
         if(op == 1) x = vet[c1-1] & vet[c2-1];
         else x = vet[c1-1] | vet[c2-1];
         //printf("res = %llu\n", x);
         m = 1ULL;
         for(i = 0; i < 62; ++i){
            if(m&x) ++qt;
            m = m << 1;
         }
         printf("%d\n", qt);
      }
   }
   return 0;
}
