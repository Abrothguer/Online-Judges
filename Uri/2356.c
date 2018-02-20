#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   char str1[110], strres[110];
   while(gets(str1)){
      gets(strres);
      if(strstr(str1,strres) != NULL) printf("Resistente\n");
      else printf("Nao resistente\n");
   }
   return 0;
}
