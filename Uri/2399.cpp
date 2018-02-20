#include <bits/stdc++.h>

using namespace std;

int main(){
   int i, n;
   cin >> n;
   int v[n], cm[n];;
   for(i = 0; i < n; ++i){
      cin >> v[i];
      cm[i] = 0;
   }
   for(i = 0; i < n; ++i){
      if(v[i]){
         ++cm[i];
         if(i) ++cm[i-1];
         if(i < n-1) ++cm[i+1];
      }
   }
   for(i = 0; i < n; ++i){
      cout << cm[i] << endl;
   }
   ios::sync_with_stdio(false);
   return 0;
}
