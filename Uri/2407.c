#include <stdio.h>
#include <stdlib.h>

int main(){
   int n, i, j, x, mgc, val, vdp, vds, vl;
   scanf("%d", &n);
   int vc[n], used[n*n];
   for(i = 0; i < n*n; ++i) used[i] = 0;
   mgc = 1;
   val = vdp = vds = vl = 0;
   for(i = 0; i < n; ++i){
      for(j = 0; j < n; ++j){
         if(!i) vc[j] = 0;
         scanf("%d", &x);
         if(mgc){
            if(x > n*n || used[x-1]) mgc = 0;
            else used[x-1] = 1;
            vl += x;
            vc[j] += x;
            if(i == j) vdp += x;
            if(i+j == n-1) vds += x;
            if(i == n-1 && vc[j] != val) mgc = 0;
         }
      }
      if(!val) val = vl;
      else if(vl != val) mgc = 0;
      //printf("vl = %d e val = %d e mgc = %d\n", vl, val, mgc);
      vl = 0;
   }
   //printf("vdp = %d e vds = %d\n", vdp, vds);
   if(vdp != val) mgc = 0;
   if(vds != val) mgc = 0;
   if(mgc) printf("%d\n", val);
   else printf("0\n");
   return 0;
}
