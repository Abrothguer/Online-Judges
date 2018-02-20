#include <bits/stdc++.h>

using namespace std;

int main(){
   long i, q, s, n, x;
   s = n = 0L;
   ios::sync_with_stdio(false);
   cin >> q;
   for(i = 0L; i < q; ++i){
      cin >> x;
      if(x) ++n;
      else ++s;
   }
   if(s > n) cout << "Y\n";
   else cout << "N\n";
   return 0;
}
