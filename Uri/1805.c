#include <stdio.h>
#include <stdlib.h>

int main(){
   long long unsigned int s, n, a, b;
   scanf("%llu %llu", &a, &b);
   n = b-a+1;
   s = n*(a+b)/2;
   printf("%llu\n", s);
   return 0;
}
