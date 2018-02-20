#include <bits/stdc++.h>

using namespace std;

int main(){
   int t, n, c, vet[12], i, d;
   ios::sync_with_stdio(false);
   cin >> t;
   d = 1;
   while(t--){
      cin >> n;
      for(i = 0; i < n; ++i) cin >> vet[i];
      //sort(vet,vet+n);
      if(n%2 == 0) c = (vet[n/2]+vet[n/2+1])/2;
      else c = vet[n/2];
      cout << "Case " << d++ << ": " << c << '\n';
   }
   return 0;
}
