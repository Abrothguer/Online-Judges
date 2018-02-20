#include <bits/stdc++.h>

using namespace std;

typedef struct s{
   string nome;
   string cor;
   char tam;
   s(){
      nome = "";
      cor = "";
      tam = ' ';
   }
   s(string a, string b, char c){
      nome = a;
      cor = b;
      tam = c;
   }
   /*bool operator
      if(cor != aux.cor) return ()
      else{
         if(tam != aux.tam)
      }*/
}S;

bool fuckface(const S &a, const S &b){
   if(a.cor != b.cor) return a.cor < b.cor;
   else{
      if(a.tam != b.tam) return a.tam > b.tam;
      else{
         return a.nome < b.nome;
      }
   }
}

int main(){
   int n, i, st = 0;
   while(true){
      cin >> n;
      if(n == 0) break;
      if(st) cout <<"\n";
      else st =1;
      S pessoas[n];
      for(i = 0; i < n; ++i){
         getchar();
         getline(cin, pessoas[i].nome);
         cin >> pessoas[i].cor >> pessoas[i].tam;
      }
      sort(pessoas, pessoas+n, fuckface);
      for(i = 0; i < n; ++i){
         cout << pessoas[i].cor << " " << pessoas[i].tam << " " << pessoas[i].nome << "\n";
      }
   }
   return 0;
}
