#include <bits/stdc++.h>

using namespace std;

int main(){
   int i, siz;
   bool com;
   string s;
   char beg, end;
   while(getline(cin, s) != NULL){
      sort(s.begin(), s.end());
      //cout << s << endl;
      siz = s.size();
      beg = end = '0';
      com = false;
      for(i = 0; i < siz; ++i){
         //printf("cur = %c\n", s[i]);
         if(s[i] != ' '){
            if(beg == '0'){
               beg = s[i];
               end = s[i];
            }
            else{
               if(s[i] == end+1 || s[i] == end) end = s[i];
               else{
                  if(!com){
                     cout << beg << ":" << end;
                     com = true;
                  }
                  else{
                     cout << ", " << beg << ":" << end;
                  }
                  beg = s[i];
                  end = s[i];
               }
            }
         }
      }
      if(beg != '0'){
         if(!com) cout << beg << ":" << end;
         else cout << ", " << beg << ":" << end;
      }
      cout << endl;
   }
   return 0;
}

//NOT PRINTING AT THE END! FIX IT!
