#include <bits/stdc++.h>
#define TAM 30

using namespace std;

vector <int> adj[TAM];
int seen[TAM];

void dfs(int v, int s){
    int t;
    ++seen[v];
    for(int i = 0; i < adj[v].size(); ++i){
        t = adj[v][i];
        for(int i = 0; i < s; ++i) cout << " ";
        if(!seen[t]){
            cout << v << "-" << t << " pathR(G," << t << ")" << endl;
            dfs(t,s+2);
        }
        else{
            cout << v << "-" << t << endl;
        }
    }
    return;
}

int main(){
    int t, v, e, a, b;
    ios::sync_with_stdio(false); cin.tie(0);
    cin >> t;
    for(int k = 1; k <= t; ++k){
        cin >> v >> e;
        memset(seen, 1, sizeof(seen));

        for(int i = 0; i < TAM; ++i) adj[i].clear();
        for(int i = 0; i < e; ++i){
            cin >> a >> b;
            adj[a].push_back(b);
            seen[a] = seen[b] = 0;
        }
        cout << "Caso " << k << ":" << endl;
        for(int i = 0; i < v; ++i) sort(adj[i].begin(), adj[i].end());


        for(int i = 0; i < v; ++i){
            if(!seen[i]){
                dfs(i,2);
                cout << endl;
            }
        }
    }
    return 0;
}
