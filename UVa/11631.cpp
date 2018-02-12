#include <bits/stdc++.h>

using namespace std;

int prim_mst(vector <pair <int, int> > graph[], int n) {
    int fw = 0;

    priority_queue <pair <long, long>, vector <pair <long, long> >, greater <pair <long, long> > > heap;
    int  cost[n];
    bool seen[n];

    for (int i = 0; i < n; ++i) {
        seen[i] = false;
        cost[i] = INT_MAX;
    }

    cost[0] = 0;
    heap.push(make_pair(0, 0));
    int node, weight, vertex;

    while (not heap.empty()) {
        weight = heap.top().first;
        node   = heap.top().second;
        heap.pop();

        if (seen[node]) {
            continue;
        }

        seen[node] = true;
        fw        += weight;

        for (int i = 0; i < graph[node].size(); ++i) {
            vertex = graph[node][i].first;
            weight = graph[node][i].second;

            if (seen[vertex]) {
                continue;
            }

            if (weight < cost[vertex]) {
                cost[vertex] = weight;
                heap.push(make_pair(weight, vertex));
            }
        }
    }

    return(fw);
}

int main() {
    int n, e;

    ios::sync_with_stdio(false);
    while (cin >> n >> e, n or e) {
        int a, b, w, tots;
        vector <pair <int, int> > graph[n];
        tots = 0;

        for (int i = 0; i < e; ++i) {
            cin >> a >> b >> w;
            graph[a].push_back(make_pair(b, w));
            graph[b].push_back(make_pair(a, w));
            tots += w;
        }

        cout << tots - prim_mst(graph, n) << endl;
    }
}
