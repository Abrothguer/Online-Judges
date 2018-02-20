#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calcule(char vars[2000][9], char inst[50], int j, int vals[2000]);

int main(){
   int vals[2000], j;
   char vars[2000][9], inst[50];
   j = 0;
   while(scanf("%s := %[^\n]", vars[j], inst) != EOF){
      //printf("%s e %s\n", vars[j], inst);

      vals[j] = calcule(vars, inst, j, vals);
      //printf("%s = %d\n", vars[j], vals[j]);
      ++j;
   }
   printf("%d\n", vals[j-1]);
   return 0;
}

int calcule(char vars[2000][9], char inst[50], int j, int vals[2000]){
   int sum, isnum, i, k;
   char num[9];
   isnum = sum = i = 0;
   //printf("instructions = %s", inst);
   while(inst[i] != ' ' && inst[i] != '\0'){
      if(!isnum && inst[i] >= '0' && inst[i] <= '9'){
         isnum = 1;
      }
      num[i] = inst[i];
      ++i;
   }
   num[i] = '\0';
   //printf("num = %s and isnum = %d\n", num, isnum);
   if(isnum) sum += atoi(num);
   else{
      for(k = 0; k < j; ++k){
         if(strcmp(vars[k],num) == 0){
            sum += vals[k];
            break;
         }
      }
   }

   if(inst[i] != '\0'){
      i += 3;
      isnum = k = 0;
      //printf("we here = %c\n", inst[i]);
      while(inst[i] != '\0'){
         if(!isnum && inst[i] >= '0' && inst[i] <= '9'){
            isnum = 1;
         }
         num[k] = inst[i];
         ++k;
         ++i;
      }
      num[k] = '\0';
      if(isnum) sum += atoi(num);
      else{
         for(k = 0; k < j; ++k){
            if(strcmp(vars[k],num) == 0){
               sum += vals[k];
               break;
            }
         }
      }
   }
   return sum;
}
