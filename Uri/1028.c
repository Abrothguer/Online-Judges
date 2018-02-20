#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gcdf(int x, int y);

int main(){
  int x, y, t;
  scanf("%d", &t);
  while(t--){
    scanf("%d %d", &x, &y);
    printf("%d\n", gcdf(x,y));
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
