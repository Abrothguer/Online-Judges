#include <bits/stdc++.h>

using namespace std;

int main(){
   int c;
   double d;
   string s;
   ios::sync_with_stdio(false);
   map<char, double> mapa;
   mapa['W'] = 1;
   mapa['H'] = 0.5;
   mapa['Q'] = 0.25;
   mapa['E'] = 0.125;
   mapa['S'] = 0.0625;
   mapa['T'] = 0.03125;
   mapa['X'] = 0.015625;
   while(cin >> s){
      if(s == "*") break;
      d = 0.0;
      c = 0;
      for(int i = 0; i < s.size(); ++i){
         if(s[i] == '/'){
            //cout << fixed << setprecision(4) << "d = " << d << endl;
            if(d == 1.0) ++c;
            d = 0.0;
         }
         else{
            d += mapa[s[i]];
            //cout << fixed << setprecision(4) << "d = " << d << endl;
         }
      }
      cout << c << endl;
   }
   return 0;
}
