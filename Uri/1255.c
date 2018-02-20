#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int i, t, n, freq[26];
  unsigned char str[300];
  scanf("%d", &t);
  getchar();
  while(t--){
    gets(str);
    i = 0;
    memset(freq, 0, sizeof(int)*26);
    while(str[i] != '\0'){
      if(str[i] >= 'A' && str[i] <= 'Z'){
        n = str[i] - 65;
        ++freq[n];
      }
      else if(str[i] >= 'a' && str[i] <= 'z'){
        n = str[i] - 97;
        ++freq[n];
      }
      ++i;
    }
    n = 0;
    for(i = 0; i < 26; ++i){
      if(freq[i] > n){
        n = freq[i];
      }
    }
    for(i = 0; i < 26; ++i){
      if(freq[i] == n){
        printf("%c", i+97);
      }
    }
    printf("\n");
  }
  return 0;
}
