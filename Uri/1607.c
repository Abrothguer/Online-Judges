#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int t, op, i, s;
  char str[12000], str2[12000];
  scanf("%d", &t);
  getchar();
  while(t--){
    scanf("%s %s", str, str2);
    i = s = op = 0;
    while(str[i] != '\0'){
      if(str[i] > str2[i]){
        s = 26 - (str[i]-str2[i]);
      }
      else{
        s = str2[i] - str[i];
      }
      op += s;
      ++i;
    }
    printf("%d\n", op);
  }
  return 0;
}
