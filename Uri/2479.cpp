#include <bits/stdc++.h>

using namespace std;

int main(){
   int n, bp, i;
   char op;
   cin >> n;
   string vet[n];
   bp = 0;
   for(i = 0; i < n; ++i){
      cin >> op >> vet[i];
      if(op == '+') ++bp;
   }
   sort(vet, vet+n);
   for(i = 0; i < n; ++i){
      cout << vet[i] << endl;
   }
   cout << "Se comportaram: " << bp << " | Nao se comportaram: " << n-bp << endl;
   return 0;
}
