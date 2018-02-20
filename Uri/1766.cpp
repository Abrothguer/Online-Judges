#include <bits/stdc++.h>

using namespace std;

typedef struct rena{
   string nome;
   int p, i;
   double a;
}rena;

bool compare_deers(const rena &a, const rena &b){
   if(a.p != b.p) return a.p > b.p;
   else{
      if(a.i != b.i) return a.i < b.i;
      else{
         if(a.a != b.a) return a.a < b.a;
         else{
            return a.nome > b.nome;
         }
      }
   }
}

int main(){
   int cen, t, n, i, m;
   cin >> t;
   cen = t;
   while(t--){
      cin >> n >> m;
      rena r[n];
      for(i = 0; i < n; ++i){
         cin >> r[i].nome >> r[i].p >> r[i].i >> r[i].a;
      }
      sort(r, r+n, compare_deers);
      cout << "CENARIO {" << cen-t <<"}\n";
      for(i = 0; i < m; ++i){
         cout << i+1 << " - " << r[i].nome << "\n";
      }
   }
   return 0;
}
