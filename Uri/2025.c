#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  int i, t;
  char* p, *strmod;
  char str[101];
  scanf("%d", &t);
  getchar();
  while(t--){
    gets(str);
    strmod = str;
    while(p = strstr(strmod,"oulupukk")){
      *(p-1) = 'J';
      *(p+8) = 'i';
      strmod = p+8;
    }
    printf("%s\n", str);
  }
  return 0;
}
