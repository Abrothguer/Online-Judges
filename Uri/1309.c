#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int i, ac, j;
  char dol[20], form[30], cent[5], aux;
  while(gets(dol)){
    gets(cent);
    if(cent[1] != '\0'){
      form[0] = cent[1];
      form[1] = cent[0];
    }
    else{
      form[0] = cent[0];
      form[1] = '0';
    }
    form[2] = '.';
    ac = 0;
    j = 3;
    i = strlen(dol) -1;
    while(i >= 0){
      if(ac == 3){
        form[j] = ',';
        ++j;
        form[j] = dol[i];
        ac = 1;
      }
      else{
        form[j] = dol[i];
        ++ac;
      }
      ++j;
      --i;
    }
    form[j] = '$';
    form[++j] = '\0';
    i = strlen(form);
    for(j = 0; j < i/2; ++j){
      aux = form[j];
      form[j] = form[i-j-1];
      form[i-j-1] = aux;
    }
    printf("%s\n", form);
  }
}
