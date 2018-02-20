#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int lengmax, leng[50], i, n, dir, j, test;
  char matr[50][51];
  test = 0;
  while(1){
    scanf("%d", &n);
    getchar();
    if(n == 0) break;
    if(test != 0)printf("\n");
    else test = 1;
    lengmax = 0;
    for(i = 0; i < n; ++i){
      gets(matr[i]);
      leng[i] = strlen(matr[i]);
    }
    for(i = 0; i < n; ++i){
      if(leng[i] > lengmax){
        lengmax = leng[i];
      }
    }
    for(i = 0; i < n; ++i){
      if(leng[i] == lengmax){
        printf("%s\n", matr[i]);
      }
      else{
        dir = lengmax - leng[i];
        for(j = 0; j < dir; ++j){
          printf(" ");
        }
        printf("%s\n", matr[i]);
      }
    }
  }
  return 0;
}
