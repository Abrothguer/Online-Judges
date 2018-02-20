#include <bits/stdc++.h>

using namespace std;

int main(){
   int n, m, f, err;
   string nome, ass, s;
   ios::sync_with_stdio(false);
   map <string, string> mapa;
   while(cin >> n, n){
      cin.ignore();
      while(n--){
         cin >> nome >> ass;
         mapa[nome] = ass;
      }
      cin >> m;
      cin.ignore();
      f = 0;
      while(m--){
         cin >> nome >> ass;
         err = 0;
         s = mapa[nome];
         for(int i = 0; i < ass.size(); ++i){
            if(ass[i] != s[i] && !err) ++err;
            else if(ass[i] != s[i]){
               ++f;
               break;
            }
         }
      }
      cout << f << endl;
   }
   return 0;
}
