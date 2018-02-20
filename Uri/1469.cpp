#include <bits/stdc++.h>
#define INF 10101010
#define TAM 520

using namespace std;

vector<int> adj[TAM];
int idades[TAM];
int seen[TAM];

int dfs(int v, int best){
    int node, r, aux;
    r = best;
    seen[v] = 1;
    //cout << v << " = " << seen[v] << endl;
    for(int i = 0; i < adj[v].size(); ++i){
        node = adj[v][i];
        if(idades[node] < r && !seen[node]){
            r = idades[node];
        }
        if(!seen[node]){
            aux = dfs(node,INF);
            if(aux < r) r = aux;
        }
    }

    return r;
}

void troca(int a, int b, int n){
    adj[a].swap(adj[b]);

    for(int i = 0; i <= n; ++i){
        for(int j = 0; j < adj[i].size(); ++j){
            if(adj[i][j] == a) adj[i][j] = b;
            else if(adj[i][j] == b) adj[i][j] = a;
        }
    }

    return;
}


int main(){
    int n, m, inst, a, b, lst, v;
    char c;

    while(cin >> n >> m >> inst){

        for(int i = 1; i <= n; ++i){
            cin >> idades[i];
        }
        for(int i = 0; i < m; ++i){
            cin >> a >> b;
            adj[b].push_back(a); // B Ã© gerenciado por A.
        }
        for(int i = 0; i < inst; ++i){
            cin.ignore();
            cin >> c;
            if(c == 'P'){
                memset(seen,0,sizeof(seen));
                cin >> v;
                lst = dfs(v,INF);
                if(lst == INF) cout << "*" << endl;
                else cout << lst << endl;
            }
            else{
                cin >> a >> b;
                troca(a,b,n);
            }
        }
        for(int i = 0; i <= TAM; ++i){
        	adj[i].clear();
        }
        memset(idades,0,sizeof(idades));
        memset(seen,0,sizeof(seen));
    }
    return 0;
}
