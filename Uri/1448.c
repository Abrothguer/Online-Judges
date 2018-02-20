#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   int t, inst, c1, c2, i, emp, a1, a2;
   char orig[200], t1[200], t2[200];
   scanf("%d", &t);
   getchar();
   inst = t;
   while(t--){
      gets(orig);
      gets(t1);
      gets(t2);
      i = c1 = c2 = a1 = a2 = emp = 0;
      while(orig[i] != '\0'){
         if(orig[i] == t1[i]){
            ++c1;
            a1 = 1;
         }
         if(orig[i] == t2[i]){
            ++c2;
            a2 = 1;
         }
         if(!emp){
            if(a1 > a2) emp = 1;
            else if(a2 > a1) emp = 2;
         }
         a1 = a2 = 0;
         ++i;
      }
      printf("Instancia %d\n", inst-t);
      if(c1 > c2) printf("time 1\n");
      else if(c2 > c1) printf("time 2\n");
      else{
         if(emp == 1) printf("time 1\n");
         else if(emp == 2) printf("time 2\n");
         else printf("empate\n");
      }
      printf("\n");
   }
   return 0;
}
