#include <bits/stdc++.h>

using namespace std;

#define TAM 30

set<char>aux;
set<int>adj[TAM];
int vis[TAM];

void dfs(int curr){
    int t;
    char c;
    vis[curr] = 1;
    c = curr+'a'-1;
    aux.insert(c);
    for(set<int> :: iterator it = adj[curr].begin(); it != adj[curr].end(); ++it){
        t = *it;
        if(vis[t]) continue;
        dfs(t);
    }
    return;
}

int main(){
    char a, b;
    int t, v, e, k, part;
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> t;

    for(int k = 1; k <= t; ++k){
        cin >> v >> e;
        part = 0;
        for(int i = 0; i < e; ++i){
            cin >> a >> b;
            adj[a-'a'+1].insert(b-'a'+1);
            adj[b-'a'+1].insert(a-'a'+1);
        }
        memset(vis,0,sizeof(vis));
        cout << "Case #" << k << ":" << endl;
        for(int i = 1; i <= v; ++i){
            if(vis[i]) continue;
            dfs(i);
            for(set<char> :: iterator it = aux.begin(); it != aux.end(); ++it){
                cout << *it << ",";
            }
            aux.clear();
            ++part;
            cout << endl;
        }
        for(int i = 1; i <= v; ++i){
            adj[i].clear();
        }
        cout << part << " connected components" << endl << endl;
    }

    return 0;
}
