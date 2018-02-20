#include <stdio.h>
#include <stdlib.h>

int main(){
   int x, y, z;
   scanf("%d %d %d", &x, &y, &z);
   if(x == y || y == z || z == x || x == y+z || y == x+z || z == x+y){
      printf("S\n");
   }
   else{
      printf("N\n");
   }
   return 0;
}
