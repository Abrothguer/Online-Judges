#include <stdio.h>
#include <stdlib.h>

int main(){
   int op1, op2;
   scanf("%d %d", &op1, &op2);
   if(op1 == 0) printf("C\n");
   else{
      if(op2 == 0) printf("B\n");
      else printf("A\n");
   }
   return 0;
}
