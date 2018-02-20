#include <stdio.h>
#include <stdlib.h>

int main(){
   int nint;
   double num, mod, ctf;
   while(scanf("%lf %lf", &num, &ctf) != EOF){
      nint = (int)num;
      mod = num-nint;
      if(mod >= ctf) ++nint;
      printf("%d\n", nint);
   }
   return 0;
}
