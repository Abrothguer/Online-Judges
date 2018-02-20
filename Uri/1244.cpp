#include <bits/stdc++.h>

using namespace std;

typedef struct str{
   string w;
   int pos;
}str;

bool cmp(const str &a, const str &b){
   if(a.w.size() != b.w.size()) return a.w.size() > b.w.size();
   else{
      return a.pos < b.pos;
   }
}

int main(){
   int n, i, j;
   cin >> n;
   while(n--){
      str s[50];
      i = 0;
      while(1){
         cin >> s[i].w;
         s[i].pos = i;
         if(getchar() == 10) break;
         ++i;
      }
      sort(s, s+i+1, cmp);
      for(j = 0; j <= i; ++j){
         cout << s[j].w;
         if(j != i) cout << " ";
         else cout << "\n";
      }
   }
   return 0;
}
