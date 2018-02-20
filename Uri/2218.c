#include <stdio.h>
#include <stdio.h>

int nreg[1000000] = {0};

int regpd(int i){
   if(nreg[i]) return nreg[i];
   else{
      nreg[i] = regpd(i-1)+i+1;
      return nreg[i];
   }
}

int main(){
   int t, n;
   nreg[0] = 2;
   nreg[1] = 4;
   scanf("%d", &t);
   while(t--){
      scanf("%d", &n);
      printf("%d\n", regpd(n-1));
   }
   return 0;
}
