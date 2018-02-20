#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
  int alit, i, spc;
  char str[5001], alch, c, mod;
  while(gets(str)){
    mod = '!';
    i = alit = spc = 0;
    while(str[i] != '\0'){
      if(i == 0){
        alch = tolower(str[i]);
      }
      else if(str[i] == ' '){
        spc = 1;
      }
      else if(str[i] != ' ' && spc == 1){
        spc = 0;
        c = tolower(str[i]);
        if(c != mod){
          mod = '!';
        }
        if(alch == c && mod != c){
          mod = c;
          ++alit;
        }
        if(alch != c){
          alch = c;
        }
      }
      ++i;
    }
    printf("%d\n", alit);
  }
  return 0;
}
