#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void invert(char str[10]);

int main(){
  int i, j, cry, n, sum;
  char num1[10], num2[10];
  while(1){
    scanf("%s %s", num1, num2);
    getchar();
    if(strcmp(num1, "0") == 0 && strcmp(num2, "0") == 0){
      break;
    }
    invert(num1);
    invert(num2);
    i = j =cry = sum = 0;
    while((num1[i] != '\0' && num2[j] != '\0') || sum != 0){
      if(num1[i] == '\0') n = (num2[j++]-'0')+sum;
      else if(num2[j] == '\0') n = (num1[i++]-'0')+sum;
      else n = (num1[i++]-'0')+(num2[j++]-'0')+sum;
      //printf("n = %d\n",n);
      if(n >= 10){
        sum = 1;
        ++cry;
      }
      else sum = 0;
    }
    if(cry > 1) printf("%d carry operations.\n", cry);
    else if(cry == 1) printf("1 carry operation.\n");
    else printf("No carry operation.\n");
  }
  return 0;
}

void invert(char str[10]){
  int i, leng;
  char aux;
  leng = strlen(str)-1;
  for(i = 0; i < leng; ++i){
    aux = str[i];
    str[i] = str[leng];
    str[leng] = aux;
    --leng;
  }
  return;
}
