#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

long long unsigned int strtoint(char str[100]);

int main(){
  long long unsigned int x;
  int hex;
  char str[100];
  while(1){
    gets(str);
    if(str[0] == '-') break;
    if(tolower(str[1]) == 'x'){
      hex = 1;
      x = strtoint(str);
    }
    else{
      hex = 0;
      x = atoi(str);
    }
    if(hex) printf("%llu\n", x);
    else printf("0x%X\n", x);
  }
  return 0;
}

long long unsigned int strtoint(char str[100]){
  int leng, i, fac;
  long long unsigned int x;
  leng = strlen(str);
  x = 0;
  for(i = leng-1; i > 1; --i){
    if(str[i] >= '0' && str[i] <= '9') fac = str[i] - '0';
    else{
      str[i] = tolower(str[i]);
      fac = str[i] - 87;
    }
    x += fac*pow(16,(leng-i-1));
  }
  return x;
}
