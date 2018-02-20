#include <bits/stdc++.h>

using namespace std;

int main(){
   int t, n, m;
   string orig, trad, s;
   //ios::sync_with_stdio(false);
   cin >> t;
   map <string, string> mp;
   while(t--){
      cin >> n >> m;
      cin.ignore();
      while(n--){
         getline(cin, orig);
         getline(cin, trad);
         mp[orig] = trad;
      }
      while(m--){
         while(1){
            cin >> s;
            if(mp.count(s) > 0) cout << mp[s];
            else cout << s;
            if(getchar() == '\n'){
               cout << '\n';
               break;
            }
            else cout << " ";
         }
      }
      mp.clear();
      cout << endl;
   }
   return 0;
}
