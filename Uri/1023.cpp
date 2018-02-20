#include <bits/stdc++.h>

using namespace std;

typedef struct house{
   int p;
   int med;
}house;

bool cmp(const house &a, const house &b){
   return a.med < b.med;
}

int main(){
   int n, tots, i, cons, t = 0, auxp, auxmed, peo;
   double gmed;
   while(1){
      cin >> n;
      house vet[n];
      if(n == 0) break;
      tots = peo = 0;

      for(i = 0; i < n; ++i){
         cin >> vet[i].p >> cons;
         vet[i].med = cons/vet[i].p;
         //cout << "med = " << vet[i].med << endl;
         tots += cons;
         peo += vet[i].p;
      }
      //cout << "tots = " << tots << " peo = " << peo << endl;

      sort(vet, vet+n, cmp);
      /*for(i = 0; i < n; ++i){
         cout << "med = " << vet[i].med << " p = " << vet[i].p << endl;
      }*/
      auxp = 0;
      auxmed = -1;
      if(!t) t = true;
      else cout << endl;
      cout << "Cidade# " << t << ":\n";
      for(i = 0; i < n; ++i){
         if(auxmed == -1){
            auxmed = vet[i].med;
            auxp += vet[i].p;
         }
         else if(auxmed == vet[i].med){
            auxp += vet[i].p;
         }
         else{
            cout << auxp << "-" << auxmed << " ";
            auxmed = vet[i].med;
            auxp = 0;
            auxp += vet[i].p;
         }
      }
      gmed = (((tots*1.0)/(peo*1.0))-0.0049999999);
      if(auxp > 0) cout << auxp << "-" << auxmed << endl;
      cout.precision(2);
      cout << "Consumo medio: " << fixed << gmed <<" m3.\n";
      ++t;
   }
   return 0;
}
