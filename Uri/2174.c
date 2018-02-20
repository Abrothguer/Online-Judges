#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check(char mat[151][1002], char name[1002], int m){
   int i, win = 1;
   for(i = 0; i < m; ++i){
      if(strcmp(mat[i], name) == 0){
         //printf("break when %s and %s", mat[i], name);
         win = 0;
         break;
      }
   }
   if(win){
      strcpy(mat[m], name);
      return 1;
   }
   else return 0;
}

int main(){
   int i, n, m;
   char mat[151][1002], name[1002];
   scanf("%d", &n);
   getchar();
   m = 0;
   for(i = 0; i < n; ++i){
      gets(name);
      if(check(mat, name, m) == 1) ++m;
   }
   printf("Falta(m) %d pomekon(s).\n", 151-m);
   return 0;
}
