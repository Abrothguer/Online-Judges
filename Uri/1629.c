#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, i, zrs, ons, sdig;
  char str[1100];
  while(1){
    scanf("%d", &n);
    getchar();
    if(!n) break;
    while(n--){
      //printf("n = %d\n", n);
      gets(str);
      i = zrs = ons = sdig = 0;
      while(str[i] != '\0'){
        if(i%2 == 0) zrs += str[i]-'0';
        else ons += str[i]-'0';
        ++i;
      }
      while(zrs != 0 || ons != 0){
        if(zrs){
          sdig += zrs%10;
          zrs /= 10;
        }
        if(ons){
          sdig += ons%10;
          ons /= 10;
        }
      }
      printf("%d\n", sdig);
    }
  }
  return 0;
}
