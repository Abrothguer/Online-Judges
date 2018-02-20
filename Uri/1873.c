#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   int t;
   char raj[10], shel[10];
   scanf("%d", &t);
   while(t--){
      scanf("%s %s", raj, shel);
      if(!strcmp(raj,shel)){
         printf("empate\n");
      }
      else if(!strcmp(raj,"spock")){
         if(!strcmp(shel,"tesoura") || !strcmp(shel,"pedra")) printf("rajesh\n");
         else printf("sheldon\n");
      }
      else if(!strcmp(raj,"lagarto")){
         if(!strcmp(shel,"spock") || !strcmp(shel,"papel")) printf("rajesh\n");
         else printf("sheldon\n");
      }
      else if(!strcmp(raj,"papel")){
         if(!strcmp(shel,"pedra") || !strcmp(shel,"spock")) printf("rajesh\n");
         else printf("sheldon\n");
      }
      else if(!strcmp(raj,"pedra")){
         if(!strcmp(shel,"tesoura") || !strcmp(shel,"lagarto")) printf("rajesh\n");
         else printf("sheldon\n");
      }
      else if(!strcmp(raj,"tesoura")){
         if(!strcmp(shel,"lagarto") || !strcmp(shel,"papel")) printf("rajesh\n");
         else printf("sheldon\n");
      }
   }
   return 0;
}
