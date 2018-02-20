#include <bits/stdc++.h>

using namespace std;

typedef struct pessoa{
   int ni;
   string nome;
   string op;
}Pessoa;

bool compare(const Pessoa &a, const Pessoa &b){
   if(a.op != b.op) return a.op > b.op;
   else{
      return a.nome < b.nome;
   }
}

int main(){
   int i, tam, apos;
   Pessoa p[100];
   string amigo;
   tam = 0;
   while(cin >> p[tam].nome){
      if(p[tam].nome == "FIM") break;
      p[tam].ni = tam;
      cin >> p[tam++].op;
   }
   sort(p, p+tam, compare);
   i = 0;
   while(p[i].op == "YES"){
      if(i == 0){
         amigo = p[i].nome;
         apos = p[i].ni;
      }
      else{
         if(p[i].nome.length() > amigo.length()){
            amigo = p[i].nome;
            apos = p[i].ni;
         }
         else if(p[i].nome.length() == amigo.length()){
            if(p[i].ni < apos){
               amigo = p[i].nome;
               apos = p[i].ni;
            }
         }
      }
      ++i;
   }
   for(i = 0; i < tam; ++i){
      if(i == 0 || p[i].nome != p[i-1].nome){
         cout << p[i].nome << "\n";
      }
   }
   cout << "\n";
   cout << "Amigo do Habay:\n" << amigo << "\n";
   return 0;
}
