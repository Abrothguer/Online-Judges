#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   int s, x, spc, h, b, l, i, evn, odd, sum;
   char num[10000];
   spc = 0;
   //printf("penios");
   while(gets(num)){
      //printf("molios");
      if(spc) printf("\n");
      else spc = 1;
      s = strlen(num);
      evn = odd = sum = l = b = h = 0;
      for(i = 0; i < s; ++i){
         sum += num[i]-48;
         if(i%2 == 0) evn += num[i]-48;
         else odd += num[i]-48;
      }
      //printf("s = %d\n", s);
      if(s >= 4) x = num[s-1]-'0' + (num[s-2]-'0')*10 + (num[s-3]-'0')*100 + (num[s-4]-'0')*1000;
      else x = atoi(num);
      //printf("x = %d\n", x);
      if((x%4 == 0 && x%100 != 0) || (x%400 == 0)){
         printf("This is leap year.\n");
         l = 1;
      }
      //printf("sum = %d\n", sum);
      if(sum%3 == 0 && (num[s-1] == '0' || num[s-1] == '5')){
         printf("This is huluculu festival year.\n");
         h = 1;
      }
      x = odd-evn;
      if(l && x%11 == 0 && (num[s-1] == '0' || num[s-1] == '5')){
         printf("This is bulukulu festival year.\n");
         b = 1;
      }
      if(!b && !h && !l){
         printf("This is an ordinary year.\n");
      }
   }
   return 0;
}
