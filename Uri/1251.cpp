#include <bits/stdc++.h>

using namespace std;

typedef struct num{
   int val;
   int qt;
}num;

bool cmp(const num &a, const num &b){
   if(a.qt != b.qt) return a.qt < b.qt;
   else return a.val > b.val;
}

int main(){
   int i, siz, t = 0;
   string s;
   num vet[130];
   for(i = 0; i < 130; ++i) vet[i].qt = 0;
   while(cin >> s != NULL){
      siz = s.size();
      for(i = 0; i < siz; ++i){
         vet[s[i]-33].qt++;
         vet[s[i]-33].val = s[i];
      }
      sort(vet, vet+97, cmp);
      if(!t) t = 1;
      else cout << "\n";
      for(i = 0; i < 130; ++i){
         if(vet[i].qt != 0){
            cout << vet[i].val << " " << vet[i].qt << "\n";
            vet[i].qt = 0;
         }
      }
   }
   return 0;
}
