#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int removespc(char str[60]);

int main(){
   int i, siz, n, l, lmax, t = 0;;
   char mat[100][60];
   while(1){
      scanf("%d", &n);
      if(!n) break;
      if(t) printf("\n");
      else t = 1;
      lmax = 0;
      for(i = 0; i < n; ++i){
         getchar();
         scanf("%[^\n]", &mat[i]);
         l = removespc(mat[i]);
         if(l > lmax) lmax = l;
         //printf("%s e l= %d\n", mat[i], l);
      }
      for(i = 0; i < n; ++i){
         printf("%*s\n", lmax, mat[i]);
      }
   }
   return 0;
}

int removespc(char str[60]){
   int l, i, f, j;
   j = i = l = f = 0;
   while(str[j] != '\0'){
      //printf("%c", str[j]);
      str[i] = str[j];
      if(str[i] != ' ' || (f == 1 && str[i] == ' ' && str[i-1] != ' ')) ++i;
      if(str[j] != ' ' && f == 0) f = 1;
      ++j;
   }
   if(str[i-1] == ' '){
      str[i-1] = '\0';
      --i;
   }
   else str[i] = '\0';
   return i;
}
