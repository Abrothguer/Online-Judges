#include <stdio.h>
#include <stdlib.h>

int stack[1000] = {0}, k;

int peek(){
   if(k >= 0) return stack[k];
   else return 0;
}

void pop(){
   stack[k--] = 0;
   return;
}

void push(int x){
   stack[++k] = x;
   return;
}

int main(){
   int n, i, j, vgs[1000];
   while(1){
      scanf("%d", &n);
      if(!n) break;
      while(1){
         j = 0;
         scanf("%d", &vgs[j]);
         if(!vgs[j]) break;
         for(j = 1; j < n; ++j) scanf("%d", &vgs[j]);
         //for(j = 0; j < n; ++j) printf("%d ", vgs[j]);
         k = -1;
         j = 0;
         for(i = 1; i <= n; ++i){
            push(i);
            if(peek() == vgs[j]){
               while(j < n && vgs[j] == peek()){
                  pop();
                  j++;
               }
            }
         }
         if(k == -1) printf("Yes\n");
         else printf("No\n");
      }
      printf("\n");
   }
   return 0;
}
