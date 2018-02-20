#include <stdio.h>
#include <stdlib.h>

int main(){
   unsigned long long int n, p, q, r, s, x, y, k, ic, jc, res;
   scanf("%llu", &n);
   scanf("%llu %llu %llu %llu %llu %llu", &p, &q, &r, &s, &x, &y);
   scanf("%llu %llu", &ic, &jc);

   res = 0ULL;
   for(k = 1ULL; k <= n; ++k){
      res += ((p*ic+q*k)%x)*((r*k+s*jc)%y);
   }
   printf("%llu\n", res);
   return 0;
}
