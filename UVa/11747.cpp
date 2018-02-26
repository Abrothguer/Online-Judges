#include <bits/stdc++.h>

using namespace std;

int find_parent(int parent[], int a) {
    if (parent[a] == a) {
        return(a);
    }

    return(parent[a] = find_parent(parent, parent[a]));
}

void unite(int parent[], int a, int b) {
    int pa, pb;

    pa = find_parent(parent, a);
    pb = find_parent(parent, b);

    if (pa == pb) {
        return;
    }
    parent[pa] = pb;
}

void kruskal(vector <pair <int, pair <int, int> > > edges, bool added[], int n) {
    int a, b;
    int parent[n];

    for (int i = 0; i < n; ++i) {
        parent[i] = i;
    }

    for (unsigned i = 0; i < edges.size(); ++i) {
        a = edges[i].second.first;
        b = edges[i].second.second;

        if (find_parent(parent, a) == find_parent(parent, b)) {
            //cout << edges[i].first << " passed " << endl;
            continue;
        }
        //cout << edges[i].first << " added to the tree" << endl;
        added[i] = true;
        unite(parent, a, b);
    }
}

bool dfs(vector <int> graph[], int source, int parent, bool visited[]) {
    visited[source] = true;

    for (unsigned i = 0; i < graph[source].size(); ++i) {
        if (graph[source][i] != parent and visited[graph[source][i]]) {
            return(true);
        }
        if (not visited[graph[source][i]]) {
            if (dfs(graph, graph[source][i], source, visited)) {
                return(true);
            }
        }
    }
    return(false);
}

int main() {
    int  n, m, a, b, w;
    bool first;

    while (cin >> n >> m, n or m) {
        vector <pair <int, pair <int, int> > > edges;
        vector <int> graph[n];

        for (int i = 0; i < m; ++i) {
            cin >> a >> b >> w;
            edges.push_back(make_pair(w, make_pair(a, b)));
            graph[a].push_back(b);
            graph[b].push_back(a);
        }

        bool flag = false;
        bool visited[n];

        for (int i = 0; i < n; ++i) {
            visited[i] = false;
        }

        for (int i = 0; i < n; ++i) {
            if (dfs(graph, i, -1, visited)) {
                flag = true;
                break;
            }
        }

        if (not flag) {
            cout << "forest" << endl;
            continue;
        }

        //cout << " found a cycle " << endl;
        bool added[m];
        for (int i = 0; i < m; ++i) {
            added[i] = false;
        }

        sort(edges.begin(), edges.end());
        kruskal(edges, added, n);
        first = true;
        for (int i = 0; i < m; ++i) {
            if (not added[i]) {
                if (first) {
                    cout << edges[i].first;
                    first = false;
                }
                else{
                    cout << " " << edges[i].first;
                }
            }
        }
        if (first) {
            cout << "forest";
        }

        cout << endl;
    }
    return(0);
}
