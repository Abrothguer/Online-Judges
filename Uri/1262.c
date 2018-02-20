#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int i, p, ac, cl;
  char str[100];
  while(gets(str)){
    scanf("%d", &p);
    getchar();
    i = ac = cl = 0;
    while(str[i] != '\0'){
      if(str[i] == 'W'){
        ac = 0;
        ++cl;
      }
      else if(str[i] == 'R' && ++ac == p){
        ac = 0;
        ++cl;
      }
      else if(str[i] == 'R' && (str[i+1] == 'W' || str[i+1] == '\0')){
        ac = 0;
        ++cl;
      }
      ++i;
    }
    printf("%d\n", cl);
  }
  return 0;
}
