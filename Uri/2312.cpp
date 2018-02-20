#include <bits/stdc++.h>

using namespace std;

typedef struct pais{
   int o, p, br;
   string name;
}Pais;

bool cmp(const Pais &a, const Pais &b){
   if(a.o != b.o) return a.o > b.o;
   else{
      if(a.p != b.p) return a.p > b.p;
      else{
         if(a.br != b.br) return a.br > b.br;
         else{
            return a.name < b.name;
         }
      }
   }
}

int main(){
   int i, n;
   cin >> n;
   Pais vet[n];
   for(i = 0; i < n; ++i){
      cin >> vet[i].name >> vet[i].o >> vet[i].p >> vet[i].br;
   }
   sort(vet, vet+n, cmp);
   for(i = 0; i < n; ++i){
      cout << vet[i].name << " " << vet[i].o << " " << vet[i].p << " " << vet[i].br << endl;
   }
   return 0;
}
