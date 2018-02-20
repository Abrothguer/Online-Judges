#include <bits/stdc++.h>

using namespace std;

int main(){
   int m, n, val, count;
   string s;
   ios::sync_with_stdio(false);
   cin >> m >> n;
   map <string, int> mapa;
   while(m--){
      cin >> s >> val;
      mapa[s] = val;
   }
   while(n--){
      count = 0;
      while(cin >> s){
         if(s == ".") break;
         cin.ignore();
         if(mapa[s]) count += mapa[s];
      }
      cout << count << endl;
   }
   return 0;
}
