#include <stdio.h>
#include <stdlib.h>

int main(){
   int i, x, j, n, b, win, vb[91]={0}, vn[91]={0};
   while(1){
      scanf("%d %d", &n, &b);
      if(!n && !b) break;
      for(i = 0; i < b; ++i){
         scanf("%d", &vb[i]);
         ++vn[vb[i]];
      }
      for(i = 0; i < b; ++i){
         for(j = i+1; j < b; ++j){
            if(!vn[abs(vb[i]-vb[j])]){
               ++vn[abs(vb[i]-vb[j])];
            }
         }
      }
      win = 1;
      for(i = 0; i < n+1; ++i){
         if(!vn[i]){
            win = 0;
         }
         vn[i] = 0;
      }
      if(win) printf("Y\n");
      else printf("N\n");
   }
   return 0;
}
