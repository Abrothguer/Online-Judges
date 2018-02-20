#include <stdio.h>
#include <stdlib.h>

int pit(int a, int b, int c){
   int a1, b1, c1;

   if(b>a && a>=c){
      a1=b,b1=a,c1=c;
   }
   else if(b>=c && c>a){
      a1=b,b1=c,c1=a;
   }
   else if(c>a && a>=b){
      a1=c,b1=a,c1=b;
   }
   else if(c>=b && b>a){
      a1=c,b1=b,c1=a;
   }
   else{
      a1=a,b1=b,c1=c;
   }
   if((a1*a1)==((b1*b1)+(c1*c1))) return 1;
   else return 0;
}

int gcd(int x, int y){
   int mod, a, b;
   if(x == 0 || y == 0) return 0;
   else if(x < 0 || y < 0) return 0;
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

int main(){
   int x, y, z;
   while(scanf("%d %d %d", &x, &y, &z) != EOF){
      if(pit(x, y, z)){
         if(gcd(gcd(x,y),z) == 1) printf("tripla pitagorica primitiva\n");
         else printf("tripla pitagorica\n");
      }
      else printf("tripla\n");
   }
   return 0;
}
