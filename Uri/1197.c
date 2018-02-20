#include <stdio.h>
#include <stdlib.h>

int main(){
  int v, t, s;
  while(scanf("%d %d", &v, &t) != EOF){
    if(v == 0 || t == 0) s = 0;
    else s = v*t*2;
    printf("%d\n", s);
  }
  return 0;
}
