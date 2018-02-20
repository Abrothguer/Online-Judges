#include <bits/stdc++.h>

using namespace std;

int main(){
   int val, t;
   string s, tg;
   t = 1;
   while(1){
      cin >> s;
      if(s == "0") break;
      cin >> tg;
      val = tg.find(s);
      if(t != 1) cout << "\n";
      cout << "Instancia " << t << endl;
      if(val >= 0){
         cout << "verdadeira\n";
      }
      else{
         cout << "falsa\n";
      }
      ++t;

   }
   return 0;
}

//s.find(str) = for in c,
//s.push_back() = insere no final

//9 * 10^18
