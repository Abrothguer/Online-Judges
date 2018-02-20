#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int t, i, spc, j;
  char str[100], secret[50];
  scanf("%d", &t);
  getchar();
  while(t--){
    memset(secret, '\0', sizeof(char)*50);
    gets(str);
    i = j = 0;
    while(str[i] != '\0'){
      if(str[i] != ' ' && (spc == 1 || i == 0)){
        secret[j] = str[i];
        spc = 0;
        ++j;
      }
      else if(str[i] == ' '){
        spc = 1;
      }
      ++i;
    }
    printf("%s\n", secret);
  }
  return 0;
}
