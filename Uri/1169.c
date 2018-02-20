#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  unsigned long long int g;
  int t;
  scanf("%d", &t);
  while(t--){
    scanf("%llu", &g);
    g = pow(2,g)/12000;
    printf("%llu kg\n", g);
  }
  return 0;
}
