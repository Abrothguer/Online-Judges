#include <bits/stdc++.h>

using namespace std;
#define TAM 100010
#define MAXT 100000
#define MINT 0
int proib[TAM];

int bfs(int dest, int init){
  int t, d = 0;

  queue < pair<int,int> >qu;
  qu.push(make_pair(init, 0));
  while(qu.empty() != 1){
    t = qu.front().first;
    d = qu.front().second;
    proib[t]++;

    qu.pop();
    if(t+1 <= MAXT && t+1 >= MINT && !proib[t+1]) qu.push(make_pair(t+1,d+1)), proib[t+1]++;
    if(t-1 <= MAXT && t-1 >= MINT && !proib[t-1]) qu.push(make_pair(t-1,d+1)), proib[t-1]++;
    if(t*2 <= MAXT && t*2 >= MINT && !proib[t*2]) qu.push(make_pair(t*2,d+1)), proib[t*2]++;
    if(t/2 <= MAXT && t/2 >= MINT && t%2 == 0 && !proib[t/2]) qu.push(make_pair(t/2,d+1)), proib[t/2]++;
    if(t*3 <= MAXT && t*3 >= MINT && !proib[t*3]) qu.push(make_pair(t*3,d+1)), proib[t*3]++;

    if(t+1 == dest || t-1 == dest || t*2 == dest || (t/2 == dest && t%2 == 0) || t*3 == dest) return d+1;

  }

  return -1;
}

int main(){
  int o, d, k, a;
  ios::sync_with_stdio(false);cin.tie(false);

  while(cin >> o >> d >> k, o, d){
    memset(proib,0,sizeof(proib));

    for(int i = 0; i < k; ++i){
      cin >> a;
      proib[a]++;
    }
    cout << bfs(d,o) << endl;
  }
  return 0;
}
