#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int proc(char str[51]);

int main(){
   int i;
   char str[51];
   while(gets(str)){
      if(proc(str)) printf("%s\n", str);
      else printf("error\n");
   }
   return 0;
}

int proc(char str[51]){
   int i, j, zer;
   i = j = zer = 0;
   if(str[i] == '\0') return 0;
   while(str[j] != '\0'){
      str[i] = str[j];
      if((str[i] == 'o' || str[i] == 'O') && zer) str[i++] = '0';
      else if(str[i] == 'l'){
         str[i++] = '1';
         if(!zer) zer = 1;
      }
      else if(str[i] >= '0' && str[i] <= '9'){
         if(str[i] != '0'){
            ++i;
            if(!zer) zer = 1;
         }
         else{
            if(zer) ++i;
         }
      }
      else if(str[i] != ' ' && str[i] != ',' && str[i] != 'o' && str[i] != 'O') return 0;
      j++;
   }
   if(i == 0 && str[i] != ',' && str[i] != ' ') str[i++] = '0';
   else if(i == 0 && (str[i] == ',' || str[i] == ' ')) return 0;
   str[i] = '\0';
   //printf("%s\n", str);
   if(i > 10) return 0;
   else if(i < 10) return 1;
   else{
      char intmax[] = "2147483647";
      for(i = 0; i < 10; ++i){
         if(str[i] > intmax[i]) return 0;
         else if(str[i] < intmax[i]) return 1;
      }
      return 1;
   }
}
