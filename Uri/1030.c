#include <stdio.h>
#include <stdlib.h>

int josephus(int n, int s);

int main(){
   int res, n, s, cas, i;
   scanf("%d", &cas);
   i = cas;
   while(cas--){
      scanf("%d %d", &n, &s);
      res = josephus(n, s);
      printf("Case %d: %d\n",i-cas, res);
   }
   return 0;
}

int josephus(int n, int s){
   if(n == 1){
      return 1;
   }
   else{
      return (josephus(n-1,s)+s-1)%n+1;
   }
}
