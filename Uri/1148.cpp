#include <bits/stdc++.h>

using namespace std;

#define NMAX 510
            //vert,weight
vector < pair<int,int> > adj[NMAX];
int seen[NMAX] = {0};
int dist[NMAX] = {-1};

int dijkstra(int a, int b, int n){
    seen[a] = 1;
    dist[a] = 0;
    int pos, dt, min, newpos, dp;
    pos = a;
    while(1){
        seen[pos] = 1;
        for(int i=0; i<adj[pos].size(); ++i){
            dt = adj[pos][i].second + dist[pos];
            dp = adj[pos][i].first;
            if(dist[dp] == -1 or dist[dp] > dt){
                dist[dp] = dt;
            }
        }
        min = newpos = -1;
        for(int i=1; i<=n; ++i){
            if(!seen[i] and min == -1 and dist[i] != -1){
                min = dist[i];
                newpos = i;
            }
            if(!seen[i] and dist[i] < min and dist[i] != -1){
                min = dist[i];
                newpos = i;
            }
        }
        if(min == -1) return -1;
        else if(newpos == b) return min;
        else pos = newpos;
    }
}

int main(){
    int n, e, q, ans;
    int a, b, w, country;
    ios::sync_with_stdio(false);cin.tie(0);
    while(cin >> n >> e, n or e){
        
        for(int i=0; i<e; ++i){
            cin >> a >> b >> w;
            country = -1;
            for(int j=0; j<adj[b].size(); ++j){
                if(adj[b][j].first == a){
                    country = j;
                    break;
                }
            }
            if(country == -1){
                adj[a].push_back(make_pair(b,w));
            }
            else{
                adj[a].push_back(make_pair(b,0));
                adj[b][country].second = 0;
            }
        }

        cin >> q;
        for(int i=0; i<q; ++i){
            for(int j=1; j<=n; ++j){
                seen[j] = 0;
                dist[j] = -1;
            }
            cin >> a >> b;
            ans = dijkstra(a, b, n);
            if(ans == -1){
                cout << "Nao e possivel entregar a carta" << endl;
            }
            else{
                cout << ans << endl;
            }
        }
        cout << endl;

        for(int i=1; i<=n; ++i){
            adj[i].clear();
        }
    }
    return 0;
}