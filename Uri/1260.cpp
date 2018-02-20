#include <bits/stdc++.h>

using namespace std;

int main(){
   int n;
   double total;
   string s;
   ios::sync_with_stdio(false);
   cin >> n;
   cin.ignore();
   cin.ignore();
   map<string, int> mapa;
   map<string, int> :: iterator it;
   while(n--){
      total = 0.0;
      while(getline(cin, s) && s.size()){
         mapa[s]++;
         ++total;
      }
      for(it = mapa.begin(); it != mapa.end(); ++it){
         cout << it->first << " " << fixed << setprecision(4) << it->second*100.00/total << endl;
      }
      mapa.clear();
      if(n)cout << endl;
   }
   return 0;
}
