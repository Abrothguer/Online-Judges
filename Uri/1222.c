#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, l, c, chrs, i, lin, pag, wsiz;
  char str[100000], flag;

  while(scanf("%d %d %d", &n, &l, &c) != EOF){
    getchar();
    gets(str);
    i = lin = pag = chrs = wsiz = 0;

    while(str[i] != '\0'){
      ++chrs;
      if(str[i] != ' '){
        flag = 'w';
        ++wsiz;
      }
      else{
        flag = 's';
        wsiz = 0;
      }

      if(chrs == c){
        ++lin;
        if(flag == 's'){
          chrs = 0;
        }
        else{
          if(str[i+1] == ' ' || str[i+1] == '\0'){
            ++i;
            chrs = 0;
          }
          else{
            chrs = wsiz;
          }
          wsiz = 0;
        }
      }

      if(lin == l){
        ++pag;
        lin = 0;
      }
      if(str[i] == '\0') break;
      ++i;
    }
    if(chrs) ++lin;
    if(lin) ++pag;
    printf("%d\n", pag);
  }
  return 0;
}
