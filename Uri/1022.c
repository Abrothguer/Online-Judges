#include <stdio.h>
#include <stdlib.h>

long int gdcf(long int x, long int y);

int main(){
   long int n1, n2, d1, d2, dr, nr, t, gdc;
   char op;
   scanf("%d", &t);
   while(t--){
      scanf("%ld / %ld %c %ld / %ld", &n1, &d1, &op, &n2, &d2);
      if(op == '+'){
         nr = n1*d2 + n2*d1;
         dr = d1*d2;
      }
      else if(op == '-'){
         nr = n1*d2 - n2*d1;
         dr = d1*d2;
      }
      else if(op == '*'){
         nr = n1*n2;
         dr = d1*d2;
      }
      else if(op == '/'){
         nr = n1*d2;
         dr = n2*d1;
      }
      //printf("nr = %ld and dr = %ld", nr, dr);
      if(nr != 0 && dr != 0) gdc = gdcf(abs(nr), abs(dr));
      else gdc = 1;
      printf("%ld/%ld = %ld/%ld\n", nr, dr, nr/gdc, dr/gdc);
   }
   return 0;
}

long int gdcf(long int x, long int y){
   long int mod, a, b;
   if(x == 0 || y == 0) return 0;
   else if(x < 0 || y < 0) return -1;
   a = x;
   b = y;
   while(1){
      mod = a%b;
      if(!mod) break;
      a = b;
      b = mod;
   }
   return b;
}
