#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(){
   int cnt, wlen, wt, i, slen, isword, spc;
   int dif;
   char str[60];
   while(gets(str)){
      slen = strlen(str);
      isword = spc = 1;
      wlen = cnt = wt = 0;
      for(i = 0; i < slen; ++i){
         //printf("%c - ", str[i]);
         if(str[i] != ' ' && str[i] != '.'){
            spc = 0;
            //printf("%c goes on not spc", str[i]);
            if(tolower(str[i]) <= 'z' && tolower(str[i]) >= 'a' && isword){
               ++wlen;
               //printf("and wlen is %d\n", wlen);
            }
            else{
               isword = 0;
               wlen = 0;
            }
         }
         else if(str[i] == '.'){
            if(isword && (str[i+1] == ' ' || str[i+1] == '\0') && wlen != 0){
               //printf("%c enters here %d\n", str[i], i);
               ++cnt;
               wt += wlen;
               isword = 0;
            }
            else isword = 0;
            wlen = 0;
         }
         else if(str[i] == ' '){
            if(isword && wlen != 0){
               //printf("%c enters here %d\n", str[i], i);
               ++cnt;
               wt += wlen;
               isword = 0;
            }
            wlen = 0;
            isword = 1;
            spc = 1;
         }
      }
      if(isword && wlen != 0){
         ++cnt;
         wt += wlen;
      }
      //printf("cnt = %d, wt = %d\n", cnt, wt);
      if(wt && cnt) dif = wt/cnt;
      else dif = 0;
      //dif = round(dif);
      //printf("%d\n", dif);
      if(dif <= 3) printf("250\n");
      else if(dif >= 6) printf("1000\n");
      else printf("500\n");
   }
   return 0;
}
