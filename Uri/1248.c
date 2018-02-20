#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmpfunc (const void * a, const void * b);
int verifica(char str1[30], char strcp[30]);

int main(){
  int i, t, ch;
  char str1[30], strb[30], strl[30];
  scanf("%d", &t);
  getchar();
  while(t--){
    gets(str1);
    gets(strb);
    gets(strl);
    ch = 0;
    if(strlen(str1) == 0){
      if(strlen(strb) > 0 || strlen(strl) > 0 ){
        ch = 1;
      }
      else{
        ch = 0;
      }
    }
    else if(strlen(strb)+strlen(strl) > strlen(str1)){
      ch = 1;
    }
    else{
      ch = verifica(str1, strb);
      if(!ch){
        ch = verifica(str1, strl);
      }
    }

    if(ch){
      printf("CHEATER\n");
    }
    else{
      i = 0;
      qsort(str1, strlen(str1), sizeof(char), cmpfunc);
      while(str1[i] != '\0'){
        if(str1[i] != ' '){
          printf("%c", str1[i]);
        }
        ++i;
      }
      printf("\n");
    }
  }
  return 0;
}

int verifica(char str[30], char strcp[30]){
  int i, j, leng1, leng2, aux;
  leng1 = strlen(str);
  leng2 = strlen(strcp);
  aux = leng2;
  for(i = 0; i < leng2; i++){
    for(j = 0; j < leng1; j++){
      if(strcp[i] == str[j]){
        str[j] = ' ';
        aux--;
        break;
      }
    }
  }
  return aux;
}

int cmpfunc (const void * a, const void * b)
{
   return ( *(char*)a - *(char*)b );
}
