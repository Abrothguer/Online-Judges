#include <bits/stdc++.h>

using namespace std;

int binsearch(int n, int vet[], int tg);

int main(){
   int n, q, i, tg, pos, test = 1;
   while(1){
      cin >> n >> q;
      if(n == 0 and q == 0) break;
      int vetnum[n];
      for(i = 0; i < n; ++i){
         cin >> vetnum[i];
      }
      sort(vetnum, vetnum+n);
      cout << "CASE# " << test << ":\n";
      for(i = 0; i < q; ++i){
         cin >> tg;
         pos = binsearch(n, vetnum, tg);
         if(pos == -1) cout << tg << " not found\n";
         else cout << tg << " found at " << pos+1 << endl;
      }
      ++test;
   }
   return 0;
}

int binsearch(int n, int vet[], int tg){
   int mid, init, fin, pos;
   init = 0;
   fin = n-1;
   while(1){
      mid = (init+fin)/2;
      if(vet[mid] == tg){
         pos = mid;
         break;
      }
      else if(fin == init or init > fin) return -1;
      else if(vet[mid] > tg) fin = mid-1;
      else if(vet[mid] < tg) init = mid+1;
   }
   while(vet[pos] == tg){
      if(pos >= 0)--pos;
      else break;
   }
   ++pos;
   //cout << "pos = " << pos << endl;
   return pos;
}
