#include <bits/stdc++.h>

using namespace std;

bool cmp(const int &a, const int &b){
   if(a%2 == 0 and b%2 != 0) return true;
   else if(a%2 != 0 and b%2 == 0) return false;
   else if(a%2 == 0 and b%2 == 0) return a < b;
   else if(a%2 != 0 and b%2 != 0) return a > b;
}

int main(){
   int n, i;
   cin >> n;
   int vet[n];
   for(i = 0; i < n; ++i){
      cin >> vet[i];
   }
   sort(vet, vet+n, cmp);
   for(i = 0; i < n; ++i){
      cout << vet[i] << endl;
   }
   return 0;
}
