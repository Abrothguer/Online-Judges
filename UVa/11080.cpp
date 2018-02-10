#include <bits/stdc++.h>

using namespace std;

int bipartite_check(vector <int> graph[], int guarded[], int seen[], int start){
    int total, status, count, anl, vertex;

    queue <int> qubfs;
    qubfs.push(start);
    guarded[start] = 1;
    count = total = 0;

    while(not qubfs.empty()){

        vertex = qubfs.front();
        qubfs.pop();
        if(seen[vertex]) continue;

        status = guarded[vertex];
        seen[vertex] = 1;
        ++total;
        if(status) ++count;

        for(int i=0; i<graph[vertex].size(); ++i){

            anl = graph[vertex][i];

            if(status == guarded[anl]) return -1;

            if(not seen[anl]){
                qubfs.push(anl);
                guarded[anl] = status == 1 ? 0 : 1;
            }
        }
    }
    // cout << "TOTAL = " << total;
    // cout << "COUNTED = " << count;
    if(total == count) return total;
    return min(count, total-count);
}

int main(){
    int t, v, e;
    cin >> t;
    while(t--){
        int a, b, total, ans;

        cin >> v >> e;
        vector <int> graph[v];
        int guarded[v], seen[v];

        for(int i=0; i<v; ++i) guarded[i] = -1, seen[i] = 0;

        for(int i=0; i<e; ++i){
            cin >> a >> b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }

        total = 0;
        for(int i=0; i<v; ++i){

            if(not seen[i]){
                ans = bipartite_check(graph, guarded, seen, i);
                if(ans == -1){
                    total = -1;
                    break;
                }
                total += ans;
            }
        }

        cout << total << endl;
    }
    return 0;
}
