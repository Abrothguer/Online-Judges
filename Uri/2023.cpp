#include <bits/stdc++.h>

using namespace std;

bool cmp(const string &a, const string &b){
  int i = 0;
  while(a[i] != '\0' && b[i] != '\0'){
    if(tolower(a[i]) != tolower(b[i])) return tolower(a[i]) > tolower(b[i]);
    ++i;
  }
  if(a[i] == '\0') return false;
  if(b[i] == '\0') return true;
}

void printa(string vet[1000], int len);

int main(){
  int i;
  string vet[1000];
  i = 0;
  while(getline(cin, vet[i]) != NULL) ++i;
  //printa(vet, i);
  sort(vet, vet+i, cmp);
  //printa(vet, i);
  cout << vet[0] << endl;
  return 0;
}

void printa(string vet[1000], int len){
  int i;
  for(i = 0; i < len; ++i){
    cout << i << " = " << vet[i] << endl;
  }
}