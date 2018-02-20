#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  int n, el, l, i, leng, hash;
  char str[60];
  scanf("%d", &n);
  while(n--){
    scanf("%d", &l);
    el = l;
    hash = 0;
    while(l--){
      getchar();
      scanf("%s", str);
      leng = strlen(str);
      for(i = 0; i < leng; ++i){
        hash += i + el-l-1 + str[i] - 'A';
      }
    }
    printf("%d\n", hash);
  }
  return 0;
}
