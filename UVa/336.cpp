#include <bits/stdc++.h>

using namespace std;

vector <int> graph[50];
bool         seen[30];

int bfs(int start, int tm){
    if (not tm) {
        return (1);
    }

    int                     count = 0, vertex, ttl;
    queue <pair<int, int> > qu;

    qu.push(make_pair(start, tm) );

    while (not qu.empty() ) {
        vertex = qu.front().first;
        ttl    = qu.front().second;
        qu.pop();

        if (seen[vertex]) {
            continue;
        }
        seen[vertex] = true;
        ++count;
        if (not ttl) {
            continue;
        }

        for (unsigned i = 0; i < graph[vertex].size(); ++i) {
            if (not seen[graph[vertex][i]]) {
                qu.push(make_pair(graph[vertex][i], ttl - 1) );
            }
        }
    }

    return (count);
}

int main(){
    int cs, edges, a, b, index, ans;
    cs = 0;

    while (cin >> edges, edges) {
        map <int, int> real_to_index;
        map <int, int> index_to_real;
        index = 0;

        for (int i = 0; i < edges; ++i) {
            cin >> a >> b;
            if (real_to_index.find(a) == real_to_index.end() ) {
                real_to_index[a]     = index;
                index_to_real[index] = a;
                ++index;
            }
            if (real_to_index.find(b) == real_to_index.end() ) {
                real_to_index[b]     = index;
                index_to_real[index] = b;
                ++index;
            }

            graph[real_to_index[a]].push_back(real_to_index[b]);
            graph[real_to_index[b]].push_back(real_to_index[a]);
        }

        while (cin >> a >> b, a or b) {
            if (real_to_index.find(a) == real_to_index.end() ) {
                ans = index;
            }
            else{
                for (int i = 0; i < index; ++i) {
                    seen[i] = false;
                }
                ans = index - bfs(real_to_index[a], b);
            }

            cout << "Case " << ++cs << ": " << ans << " nodes not reachable from node "
                 << a << " with TTL = " << b << "." << endl;
        }

        for (int i = 0; i < index; ++i) {
            graph[i].clear();
        }
    }
    return (0);
}
