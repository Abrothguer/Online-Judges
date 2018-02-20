#include <bits/stdc++.h>

using namespace std;

int main(){
   int n, m, p, qt;
   string s;
   double val;
   ios::sync_with_stdio(false);
   cin >> n;
   map <string, double> mapa;
   map <string, double> :: iterator it;
   while(n--){
      cin >> m;
      for(int i = 0; i < m; ++i){
         cin >> s >> val;
         mapa[s] = val;
      }
      cin >> p;
      val = 0.0;
      for(int i = 0; i < p; ++i){
         cin >> s >> qt;
         val += mapa[s]*qt;
      }
      cout << "R$ " << fixed << setprecision(2) << val << endl;
   }
   return 0;
}
