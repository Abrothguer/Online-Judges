#include <bits/stdc++.h>

using namespace std;

bool bfs(vector<int> g[], int b, int n){
    int seen[n+1], cur;
    for(int i=0; i<=n; ++i) seen[i] = 0;
    queue<int> myq;
    myq.push(b);
    while(not myq.empty()){
        cur = myq.front();
        myq.pop();
        for(int i=0; i<g[cur].size(); ++i){
            if(not seen[ g[cur][i] ]){
                seen[g[cur][i]] = 1;
                myq.push(g[cur][i]);
            }
        }
    }
    for(int i=1; i<=n; ++i){
        if(not seen[i]) return false;
    }
    return true;
}

int main(){
    bool ex;
    int n, m, a, b, w;
    ios::sync_with_stdio(false);cin.tie(0);
    while(cin >> n >> m, m or n){
        vector <int> g[n+1];
        for(int i=0; i<m; ++i){
            cin >> a >> b >> w;
            if(w == 2){
                g[b].push_back(a);
            }
            g[a].push_back(b);
        }
        ex = true;
        for(int i=1; i<=n; ++i){
            if(not bfs(g, i, n)){
                ex = false;
                break;
            }
        }
        if(ex) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}