#include <bits/stdc++.h>

using namespace std;

void simple_dfs(vector <int> graph[], int vertex, bool seen[], stack <int> &finished){

    int next;
    seen[vertex] = true;

    // Explores the children
    for(unsigned i=0; i<graph[vertex].size(); ++i){

        next = graph[vertex][i];
        if(not seen[next]){
            simple_dfs(graph, next, seen, finished);
        }
    }

    // All children explored
    finished.push(vertex);
}

void find_ssc(vector <int> graph[], int vertex, bool seen[]){

    int next;
    seen[vertex] = true;

    // Just explores.
    for(unsigned i=0; i<graph[vertex].size(); ++i){

        next = graph[vertex][i];
        if(not seen[next]){
            find_ssc(graph, next, seen);
        }
    }
}


int main(){
    int t, n, m;
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> t;
    while(t--){
        cin >> n >> m;

        int a, b, counter;
        vector <int> graph[n+1];
        for(int i=0; i<m; ++i){
            cin >> a >> b;
            graph[a].push_back(b);
        }

        counter = 0;
        bool seen[n+1];
        stack <int> stk;
        for(int i=0; i<=n; ++i) seen[i] = false;

        for(int i=0; i<=n; ++i){

            if(not seen[i]){
                simple_dfs(graph, i, seen, stk);
            }
        }

        for(int i=0; i<=n; ++i) seen[i] = false;

        while(not stk.empty()){
            a = stk.top();
            stk.pop();

            if(not seen[a]){
                find_ssc(graph, a, seen);
                ++counter;
            }
        }

        cout << counter-1 << endl;
    }
    return 0;
}
