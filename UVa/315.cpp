#include <bits/stdc++.h>

#define MAX 110

using namespace std;

set <int> articulation_pts;
set <int> :: iterator it;
int parent [MAX];
int visited [MAX];
int lowest_time [MAX];
int visited_time [MAX];

void find_articulation(vector <int> graph[], int node, int t){

    visited[node] = 1;
    lowest_time[node] = t;
    visited_time[node] = t;
    int children=0, descendant;

    //cout << "CALLED WITH " << node << endl;

    for(int i=0; i<graph[node].size(); ++i){

        descendant = graph[node][i];
        if(descendant == parent[node]) continue;

        if(not visited[descendant]){

            //cout << "NODE " << node << " DID NOT VISIT " << descendant << " YET " << endl;
            children++;
            parent[descendant] = node;

            find_articulation(graph, descendant, t+1);

            lowest_time[node] = min(lowest_time[node], lowest_time[descendant]);
            //cout << "LOW TIME OF " << node << " IS " << lowest_time[node] << endl;

            if(lowest_time[descendant] >= visited_time[node] and parent[node] != -1){

                //cout << "I AM PUTTIN " << node << " BECAUSE VISITED = " << visited_time[node] << " AND LOW DESC " << descendant << " IS " << lowest_time[descendant] << endl;
                articulation_pts.insert(node);
            }

        }
        else{
            //cout << "UPDATE " << node << " LOW = " << lowest_time[node] << " AND DESC " << descendant << " HAS VISDESC " << visited_time[descendant] << endl;
            lowest_time[node] = min(lowest_time[node], visited_time[descendant]);
        }
    }
    if(parent[node] == -1 and children >= 2){
        //cout << "PUTTIN " << node << " CAUSE CHIL IS  " << children << endl;
        articulation_pts.insert(node);
    }
}


int main(){
    int n, t, a;
    string s;

    while(cin >> n, n){
        vector <int> graph[n+1];
        cin.ignore();

        while(true){
            getline(cin, s);
            if(s == "0") break;
            //cout << " s  is " << s << endl;
            stringstream ss;
            ss << s;
            ss >> t;

            while(ss >> a){
                graph[t].push_back(a);
                graph[a].push_back(t);
            }
        }
        for(int i=0; i<=n; ++i){
            sort(graph[i].begin(), graph[i].end());
            graph[i].erase(unique(graph[i].begin(), graph[i].end()), graph[i].end());
        }

        // for(int i=0; i<=n; ++i){
        //     cout << " i = ";
        //     for(int j=0; j<graph[i].size(); ++j){
        //         cout << graph[i][j] << " => ";
        //     }
        //     cout << endl;
        // }

        articulation_pts.clear();

        for(int i=0; i<=n; ++i){
            visited[i] = 0;
            parent[i] = 0;
            lowest_time[i] = 0;
            visited_time[i] = 0;
        }

        parent[1] = -1;
        find_articulation(graph, 1, 0);

        // for(it = articulation_pts.begin(); it != articulation_pts.end(); ++it){
        //     cout << *it << endl;
        // }

        cout << articulation_pts.size() << endl;
    }
    return 0;
}
