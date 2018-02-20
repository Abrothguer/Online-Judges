#include <stdio.h>
#include <stdlib.h>

int main(){
   int vb[20], win, b, n, i, dev, cred, val;
   while(1){
      scanf("%d %d", &b, &n);
      if(!n && !b) break;
      for(i = 0; i < b; ++i) scanf("%d", &vb[i]);
      for(i = 0; i < n; ++i){
         scanf("%d %d %d", &dev, &cred, &val);
         vb[dev-1] -= val;
         vb[cred-1] += val;
      }
      win = 1;
      for(i = 0; i < b; ++i){
         if(vb[i] < 0){
            win = 0;
            break;
         }
      }
      if(win) printf("S\n");
      else printf("N\n");
   }
   return 0;
}
