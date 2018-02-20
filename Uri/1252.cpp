#include <bits/stdc++.h>

using namespace std;

typedef struct num{
   int val, mod;
}num;

bool compare(const num &a, const num &b){
   if(a.mod != b.mod) return a.mod < b.mod;
   else{
      if(a.val%2 == 0 and b.val%2 != 0) return false;
      else if(a.val%2 != 0 and b.val%2 == 0) return true;

      else if(a.val%2 != 0 and b.val%2 != 0) return a.val > b.val;

      else if(a.val%2 == 0 and b.val%2 == 0) return a.val < b.val;
   }
}

int main(){
   int n, m, i;
   while(1){
      cin >> n >> m;
      num vet[n];
      for(i = 0; i < n; ++i){
         cin >> vet[i].val;
         vet[i].mod = vet[i].val%m;
      }
      cout << n << " " << m << "\n";
      if(n == 0 and m == 0) break;
      sort(vet, vet+n, compare);
      for(i = 0; i < n; ++i){
         cout << vet[i].val << '\n';
      }
   }
   return 0;
}
