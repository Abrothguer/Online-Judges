#include <bits/stdc++.h>

using namespace std;

#define LIM 60

vector<int>adj[LIM];
int tr, vis[LIM] = {0};

void dfs(int son, int parent){
    int test;
    ++vis[son];
    for(int i = 0; i < adj[son].size(); ++i){
        test = adj[son][i];
        if(test == parent || vis[test]) continue;
        ++tr; //IDA.
        dfs(test,son);
        ++tr; //VOLTA.
    }
    return;
}

int main(){
    int t, beg, v, a, x, y;
    ios::sync_with_stdio(false); cin.tie(0);
    cin >> t;
    while(t--){
        cin >> beg;
        cin >> v >> a;
        for(int i = 0; i < a; ++i){
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        tr = 0;
        dfs(beg,-1);
        for(int i = 0; i < a; ++i){
            adj[i].clear();
        }
        cout << tr << endl;
    }
    return 0;
}
