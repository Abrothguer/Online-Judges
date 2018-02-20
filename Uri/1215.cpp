#include <bits/stdc++.h>

using namespace std;

int main(){
   char c;
   string s;
   set <string> dict;
   set <string> :: iterator it;
   while(c = getchar()){
      if(c == EOF) break;
      if(c >= 'A' && c <= 'Z') c = tolower(c);
      if(c >= 'a' && c <= 'z') s.push_back(c);
      else if(s.size()){
         dict.insert(s);
         s.erase();
      }
      //cout << "str = " << s << endl;
   }
   for(it = dict.begin(); it != dict.end(); ++it){
      cout << *it << endl;
   }
   return 0;
}
