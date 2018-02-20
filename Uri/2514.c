#include <stdio.h>
#include <stdlib.h>

int gcdf(int x, int y);
int lcmf(int x, int y, int gcd);

int main(){
   int m, l1, l2, l3, res;
   while(scanf("%d", &m) != EOF){
      scanf("%d %d %d", &l1, &l2, &l3);
      res = lcmf(l1, l2, gcdf(l1, l2));
      //printf("res = %d\n", res);
      res = lcmf(l3, res, gcdf(l3, res));
      //printf("res = %d\n", res);
      res -= m;
      printf("%d\n", res);
   }
   return 0;
}

int gcdf(int x, int y){
  int mod, a, b;
  if(x == 0 || y == 0) return 0;
  if(x < 0 || y < 0) return -1;
  a = x;
  b = y;
  while(1){
    mod = a%b;
    if(!mod) break;
    a = b;
    b = mod;
  }
  return b;
}

int lcmf(int x, int y, int gcd){
  if(gcd) return (x*y)/gcd;
  else return 0;
}
