#include <stdio.h>
#include <stdlib.h>

long long t, vet[100], m, n;

long long gcd(long long a, long long b){
    if(!b) return a;
    else return gcd(b, a%b);
}

long long int lcm(long long a, long long b){
   if(!a || !b) return 0;
   return (a*b)/gcd(a,b);
}

int verify(long long x){
   int i;
   for(i=0; i<n; i++){
      if(vet[i]==x) return 0;
   }
   return 1;
}

long long int testb(){
   int i;
   for(i=2; i<=t; i++){
      if(t%i == 0){
         if(lcm(i,m) == t){
            if(verify(i)) return i;
         }
      }
   }
   return -1;
}

int main(){
   int i;
   while(1){
      scanf("%lld %lld", &n, &t);
      if(!n || !n) break;
      for(i=0; i<n; i++) scanf("%lld", &vet[i]);

      m=1;
      for(i=0; i<n; i++){
         m = lcm(m, vet[i]);
      }
      m = testb();
      if(m>1) printf("%lld\n", m);
      else printf("impossivel\n");
   }
   return 0;
}
