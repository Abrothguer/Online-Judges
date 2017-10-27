#include <bits/stdc++.h>

using namespace std;

int seen[130] = {0};

int dfs(vector<int> g[], int v){
    int va, cnt = 0;
    //cout << "analizando " << v << endl;
    for(int i=0; i<g[v].size(); ++i){
        va = g[v][i];
        if(not seen[va]){
            seen[va] = 1;
            //cout << "indo de " << v << " para " << va << endl;
            cnt += dfs(g,va) + 1;
        }
    }
    return cnt;
}

int main(){
    int n, c, v, qr, cnt;
    ios::sync_with_stdio(false);cin.tie(0);
    while(cin >> n, n){
        vector<int> g[n+1];
        while(cin >> c, c){
            while(cin >> v, v){
                g[c].push_back(v);
            }
        }
        cin >> qr;
        for(int i=0; i<qr; ++i){
            cin >> v;
            cnt = dfs(g, v);

            cout << n-cnt;
            for(int j=1; j<=n; ++j){
                if(not seen[j]) cout << " " << j;
                else seen[j] = 0;
            }
            cout << endl;
        }
    }
    return 0;
}