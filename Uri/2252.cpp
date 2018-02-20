#include <bits/stdc++.h>

using namespace std;

typedef struct tecla{
   double oil;
   int num;
}Tecla;

bool cmp(const Tecla &a, const Tecla &b){
   return a.oil > b.oil;
}

int main(){
   int i, siz, c = 1;
   Tecla vet[10];
   while(cin >> siz){
      for(i = 0; i < 10; ++i){
         cin >> vet[i].oil;
         vet[i].num = i;
      }
      sort(vet, vet+10, cmp);
      cout << "Caso " << c << ": ";
      for(i = 0; i < siz; ++i){
         cout << vet[i].num;
      }
      cout << endl;
      ++c;
   }
   return 0;
}
