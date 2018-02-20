#include <bits/stdc++.h>

using namespace std;

#define TAM 100100

vector<int> adj[TAM];
int seen[TAM] = {0};

int bfs(int n){
    if(1 == n) return 0;
    int dist, value, t;
    queue< pair<int,int> > qu;
    qu.push(make_pair(1,0));
    ++seen[1];
    while(qu.empty()!=1){
        value = qu.front().first;
        dist = qu.front().second;
        qu.pop();
        for(int i = 0; i < adj[value].size(); ++i){
            t = adj[value][i];
            if(t == n) return dist+1;
            if(!seen[t]){
                seen[t]++;
                qu.push(make_pair(t,dist+1));
            }
        }
    }
    return 0;
}

int main(){
    int n, k, l;
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> n >> k;
    int vet[TAM];
    while(k--){
        cin >> l;
        for(int i = 0; i < l; ++i){
            cin >> vet[i];
        }
        for(int i = 0; i < l; ++i){
            for(int j = i+1; j < l; ++j){
                adj[vet[i]].push_back(vet[j]);
                adj[vet[j]].push_back(vet[i]);
            }
        }
    }
    cout << bfs(n) << endl;
    return 0;
}
