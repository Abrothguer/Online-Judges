
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define mod 1000000007

long long unsigned int base26(long long unsigned int *vet, char str[2000], int i);

int main(){
   long long unsigned int val, vet[1000] = {0};
   int len, i;
   char str[2000];
   while(fgets(str, 2000, stdin)){
      len = strlen(str) - 1;
      val = 0;
      for(i = 0; i < len; ++i){
         val += base26(vet, str, len-1-i) * (str[i]-65);
         val %= mod;
      }
      printf("%llu\n", val);
   }
   return 0;
}

long long unsigned int base26(long long unsigned int *vet, char str[2000], int i){
   long long unsigned int var = 1;
   int j;
   if(vet[i] != 0) return vet[i];
   else{
      for(j = 0; j < i; ++j){
         var *= 26;
         var %= mod;
      }
      vet[i] = var;
      //printf("var = %llu\n", var);
      return var;
   }
}
