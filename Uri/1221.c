#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int c, i, pr;
  long long unsigned int n;
  scanf("%d", &c);
  while(c--){
    scanf("%llu", &n);
    if(n%2 == 0 && n != 2) printf("Not Prime\n");
    else if(n == 2) printf("Prime\n");
    else{
      pr = 1;
      for(i = 3; i <= floor(sqrt(n)); i+= 2){
        //printf("i = %d\n", i);
        if(!(n%i)){
          pr = 0;
          break;
        }
      }
      if(pr) printf("Prime\n");
      else printf("Not Prime\n");
    }
  }
  return 0;
}
