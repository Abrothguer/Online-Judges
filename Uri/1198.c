#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  long long int sh, so;
  while(scanf("%lld %lld", &sh, &so) != EOF){
    if(so>sh) printf("%lld\n", so-sh);
    else printf("%lld\n", sh-so);
  }
  return 0;
}
