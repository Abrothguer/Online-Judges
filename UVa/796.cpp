#include <bits/stdc++.h>

#define MAX 10000

using namespace std;

set < pair < int, int > > bridges;
bool visited[MAX];
int visited_time[MAX];
int lowest_time[MAX];
int parent[MAX];

void find_bridge(vector<int> graph[], int node, int tm){

    visited[node] = true;
    visited_time[node] = tm;
    lowest_time[node] = tm;

    int descendant;
    for(int i=0; i<graph[node].size(); ++i){

        descendant = graph[node][i];
        if(descendant == parent[node]) continue;

        if(not visited[descendant]){

            parent[descendant] = node;

            find_bridge(graph, descendant, tm+1);
            lowest_time[node] = min(lowest_time[node], lowest_time[descendant]);

            if(visited_time[node] < lowest_time[descendant]){
                bridges.insert( make_pair( min(node, descendant), max(node, descendant) ) );
            }
        }
        else{
            lowest_time[node] = min(visited_time[descendant], lowest_time[node]);
        }
    }
}


int main(){
    int n, tg, e, v;
    char trash;
    ios::sync_with_stdio(false);
    while(cin >> n){

        vector <int> graph[n];
        for(int i=0; i<n; ++i){
            cin >> tg;
            //cout << "TG IS " << tg << endl;

            cin >> trash; // (
            cin >> e;
            cin >> trash; // )

            for(int j=0; j<e; ++j){
                cin >> v;
                graph[tg].push_back(v);
            }
        }
        bridges.clear();

        for(int i=0; i<n; ++i){
            visited[i] = false;
        }

        for(int i=0; i<n; ++i){

            if(not visited[i]){
                find_bridge(graph, i, 0);
            }
        }

        cout << bridges.size() << " critical links" << endl;
        for(set< pair<int,int> > ::iterator it = bridges.begin(); it!=bridges.end(); ++it){

            cout << it->first << " - " << it->second << endl;
        }
        cout << endl;
    }
    return 0;
}
