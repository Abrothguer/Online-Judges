#include <bits/stdc++.h>

using namespace std;


void bfs(vector<int> graph[], int n, int src){
    int  day, vertex, prevday;
    int  count, maxday, maxcount;
    maxday = count = maxcount = prevday = 0;
    bool seen[n];
    for (int i = 0; i < n; ++i) {
        seen[i] = false;
    }

    //         vertex,depth
    queue < pair< int, int> > qubfs;
    qubfs.push(make_pair(src, 0) );

    while (not qubfs.empty() ) {
        day    = qubfs.front().second;
        vertex = qubfs.front().first;
        qubfs.pop();

        if (seen[vertex]) {
            continue;
        }
        seen[vertex] = true;

        if (day == prevday) {
            ++count;
        }
        else{
            if (count > maxcount or(maxday == 0 and count == maxcount) ) {
                maxcount = count;
                maxday   = prevday;
            }
            prevday = day;
            count   = 1;
        }

        for (int i = 0; i < graph[vertex].size(); ++i) {
            if (not seen[ graph[vertex][i]]) {
                qubfs.push(make_pair(graph[vertex][i], day + 1) );
            }
        }
    }

    if (count > maxcount) {
        maxcount = count;
        maxday   = prevday;
    }
    if (maxday == 0 and day != 0) {
        maxday   = 1;
        maxcount = 1;
    }

    if (not maxday) {
        cout << maxday << endl;
    }
    else{
        cout << maxcount << " " << maxday << endl;
    }
}


int main(){
    int         n, t, a, b;
    cin >> n;
    vector<int> graph[n];

    for (int i = 0; i < n; ++i) {
        cin >> a;
        for (int j = 0; j < a; ++j) {
            cin >> b;
            graph[i].push_back(b);
        }
    }

    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> a;
        bfs(graph, n, a);
    }
    return (0);
}
