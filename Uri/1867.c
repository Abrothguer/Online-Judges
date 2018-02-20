#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sumalg(int *alg){
   int x = *alg;
   *alg = 0;
   while(x != 0){
      *alg += x%10;
      x /= 10;
   }
   if(*alg >= 10) sumalg(alg);
   return;
}

int main(){
   int i, j, alg1, alg2;
   char str1[200], str2[200];
   while(1){
      scanf("%s %s", str1, str2);
      if(!strcmp(str1, "0") && !strcmp(str2,"0")) break;
      i = j = alg1 = alg2 = 0;
      while(str1[i] != '\0' || str2[j] != '\0'){

         if(str1[i] != '\0') alg1 += str1[i]-'0';
         if(str2[j] != '\0') alg2 += str2[j]-'0';

         if(str1[i] != '\0') ++i;
         if(str2[j] != '\0') ++j;
      }
      //printf("alg1 = %d and alg2 = %d\n", alg1, alg2);
      sumalg(&alg1);
      sumalg(&alg2);
      //printf("alg1 = %d and alg2 = %d\n", alg1, alg2);
      if(alg1 > alg2) printf("1\n");
      else if(alg2 > alg1) printf("2\n");
      else printf("0\n");
   }
   return 0;
}
