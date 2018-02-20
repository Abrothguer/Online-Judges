#include <bits/stdc++.h>

using namespace std;

int fib(int x, int *c){
   ++(*c);
   if(!x) return 0;
   else if(x == 1) return 1;
   else{
      return fib(x-1, c) + fib(x-2, c);
   }
}

int main(){
   int x, n, c, f;
   ios::sync_with_stdio(false);
   cin >> n;
   while(n--){
      c = 0;
      cin >> x;
      f = fib(x, &c);
      cout << "fib(" << x << ") = " << c-1 << " calls = " << f << endl;
   }
   return 0;
}
