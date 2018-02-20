#include <stdio.h>
#include <stdlib.h>

long long unsigned int fib[50] = {0ULL};

long long unsigned int fibpd(int i){
   if(fib[i] != 0){
      return fib[i];
   }
   else{
      fib[i] = fibpd(i-1)+fibpd(i-2);
      return fib[i];
   }
}

long long unsigned int gdc(long long unsigned int pot, long long unsigned f){
   long long unsigned int mod, a, b;
   if(pot == 0 || f == 0) return 0;
   else if(pot < 0 || f < 0) return 0;
   a = pot;
   b = f;
   while(1){
      mod = a%b;
      if(!mod) break;
      a = b;
      b = mod;
   }
   return b;
}

int main(){
   int n;
   long long unsigned int pot, f, x;
   fib[1] = 1ULL;
   fib[2] = 1ULL;
   while(scanf("%d", &n) != EOF){
      pot = 1ULL << n;
      f = fibpd(n+2);
      while(1){
         x = gdc(pot, f);
         if(x <= 1) break;
         pot /= x;
         f /= x;
      }
      printf("%llu/%llu\n", f, pot);
   }
   return 0;
}
