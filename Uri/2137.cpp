#include <bits/stdc++.h>

using namespace std;

int main(){
   int n, i;
   while(cin >> n != NULL){
      int vet[n];
      for(i = 0; i < n; ++i){
         cin >> vet[i];
      }
      sort(vet, vet+n);
      for(i = 0; i < n; ++i){
         printf("%04d\n", vet[i]);
      }
   }
   return 0;
}
