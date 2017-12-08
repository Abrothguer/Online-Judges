#include <bits/stdc++.h>

using namespace std;

long dijkstra(vector< pair<int, long> > g[], int n, int beg, int end){
    int v, vt;
    int seen[n];
    long vet[n];
    long dist;

    priority_queue< pair<long,int> , vector< pair<long,int> >, std::greater< pair<long,int> > > pq;
    pq.push(make_pair(0, beg));

    for(int i=0; i<n; ++i) vet[i] = -1L, seen[i] = 0;
    vet[beg] = 0;

    while(not pq.empty()){
        
        v = pq.top().second;
        
        if(v == end) return pq.top().first;

        pq.pop();
        if(seen[v]) continue;
        
        seen[v] = 1;
        
        for(int i=0; i<g[v].size(); ++i){
            vt = g[v][i].first;
            if(seen[vt]) continue;

            dist = vet[v] + g[v][i].second;
            if(vet[vt] == -1 or dist < vet[vt]){
                vet[vt] = dist;
                pq.push(make_pair(dist, vt));
            }
        }
        
    }

    return -1;
}

int main(){
    int c, n, m, s, t;
    int v1, v2, cnt, cas;
    long w;

    cin >> c;
    cas = 1;

    while(c--){
        cin >> n >> m >> s >> t;
        
        vector< pair<int,long> > g[n];

        for(int i=0; i<m; ++i){
            
            cin >> v1 >> v2 >> w;
            g[v1].push_back(make_pair(v2,w));
            g[v2].push_back(make_pair(v1,w));

        }

        cnt = dijkstra(g, n, s, t);
        cout << "Case #" << cas++ << ": "; 
        if(cnt == -1) cout << "unreachable" << endl;
        else cout << cnt << endl;

    }
    return 0;
}