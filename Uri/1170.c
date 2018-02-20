#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int t, n, day;
  double c;
  scanf("%d", &t);
  while(t--){
    scanf("%lf", &c);
    for(day = 0; c > 1; ++day){
      c = c/2;
    }
    printf("%d dias\n", day);
  }
  return 0;
}
