#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int i;
  unsigned char str[100];
  while(gets(str)){
    i = 0;
    while(str[i] != '\0'){
      if(str[i] >= 'A' && str[i] <= 'Z'){
        str[i] += 13;
        if(str[i] > 'Z'){
          str[i] -= 26;
        }
      }
      else if(str[i] >= 'a' && str[i] <= 'z'){
        str[i] += 13;
        if(str[i] > 'z'){
          str[i] -= 26;
        }
      }
      ++i;
    }
    printf("%s\n", str);
  }
  return 0;
}
