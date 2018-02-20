#include <stdio.h>
#include <stdlib.h>

int main(){
  long long unsigned int x, y;
  int i;
  while(scanf("%llu %llu", &x, &y) != EOF){
    //printf("%llu %llu\n", x, y);
    if(x != 0){
      for(i = x-1; i > 0; --i){
        x *= i;
      }
    }
    else x = 1;
    if(y != 0){
      for(i = y-1; i > 0; --i){
        y *= i;
      }
    }
    else y = 1;
    printf("%llu\n", x+y);
  }
  return 0;
}
