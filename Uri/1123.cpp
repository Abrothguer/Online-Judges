#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, c, k;
    int a, b, w;
    int mins, vert, dt;
    ios::sync_with_stdio(false);cin.tie(0);
    while(cin >> n >> m >> c >> k, c or m or n or k){
        // graph  vertex,weight
        vector< pair<int,int> > g[n];
        int prec[c], dist[n], seen[n];
    
        for(int i=0; i<m; ++i){
            cin >> a >> b >> w;
            g[a].push_back(make_pair(b,w));
            g[b].push_back(make_pair(a,w));
            if(i < n){
                dist[i] = 10101010;
                seen[i] = 0;    
            }
        }
        prec[c-1] = 0;
        for(int i=c-2; i>=0; --i){
            
            for(int j=0; j<=g[i].size(); ++j){
                if(g[i][j].first == i+1){
                    prec[i] = g[i][j].second + prec[i+1];
                    break;
                }
            }

        }
        //for(int i=0; i<c; ++i) cout << prec[i] << endl;

        dist[k] = 0;
        mins = 10101010;
        //                 weight, vertex
        priority_queue < pair<int,int> > pq;
        pq.push(make_pair(0,k));

        while(not pq.empty()){
            vert = pq.top().second;
            //cout << "entering " << pq.top().second << " with " << pq.top().first;
            //system("pause");
            if(seen[vert]){
                pq.pop();
                continue;
            }
            seen[vert] = 1;
            pq.pop();

            //cout << vert << " is here" << endl;

            for(int i=0; i<g[vert].size(); ++i){
                if(g[vert][i].first < c){
                    mins = min(mins, dist[vert] + g[vert][i].second + prec[ g[vert][i].first ]);
                }
                else if (not seen[ g[vert][i].first ]){
                    dt = g[vert][i].second + dist[vert];
                    if(dt < dist[ g[vert][i].first ]){
                        dist[ g[vert][i].first ] = dt;
                        pq.push(make_pair(-dt, g[vert][i].first));
                    }
                }
            }
        }
        cout << mins << endl;
    }
    return 0;
}