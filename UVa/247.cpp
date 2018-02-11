#include <bits/stdc++.h>

using namespace std;

void simple_dfs(vector <int> graph[], int node, bool seen[], stack <int> &finish){

    seen[node] = true;

    for(int i=0; i<graph[node].size(); ++i){

        if(not seen[ graph[node][i] ]){
            simple_dfs(graph, graph[node][i], seen, finish);
        }
    }

    finish.push(node);
}

void find_ssc(vector <int> graph[], int node, bool seen[], vector <int> &component){

    seen[node] = true;
    component.push_back(node);

    for(int i=0; i<graph[node].size(); ++i){

        if(not seen[ graph[node][i] ]){
            find_ssc(graph, graph[node][i], seen, component);
        }
    }
}

int main(){
    int n, m, c=1;
    while(cin >> n >> m, n or m){

        int tg, count = 0;
        vector <int> graph[n];
        vector <int> transpose[n];

        map <string, int> dict;
        map <int, string> reverse;
        string n1, n2;

        for(int i=0; i<m; ++i){
            cin >> n1 >> n2;
            //cout << "{" << n1 << "} and {" << n2 << "}"<<endl;

            if(count == 0){
                dict[n1] = 0;
                reverse[0] = n1;
                ++count;
            }
            else if(dict[n1] == 0 and reverse[0] != n1){
                dict[n1] = count;
                reverse[count++] = n1;
            }

            if(dict[n2] == 0 and reverse[0] != n2){
                dict[n2] = count;
                reverse[count++] = n2;
            }

            graph[ dict[n1] ].push_back( dict[n2] );
            transpose[ dict[n2] ].push_back( dict[n1] );
        }
        //cout << "Final count is " << count << endl;
        //
        // for(map <string, int> :: iterator it = dict.begin(); it != dict.end(); ++it){
        //     cout << it->first << " mapped to " << it->second << endl;
        // }

        bool seen[n];
        stack <int> finish;

        for(int i=0; i<n; ++i) seen[i] = false;

        for(int i=0; i<n; ++i){

            if(not seen[i]){
                simple_dfs(graph, i, seen, finish);
            }
        }


        for(int i=0; i<n; ++i) seen[i] = false;
        vector < vector<int> > allcmp;

        while(not finish.empty()){
            tg = finish.top();
            finish.pop();

            if(not seen[tg]){
                //cout << "DID NOT SEE " << tg << endl;
                vector <int> cmp;
                find_ssc(transpose, tg, seen, cmp);
                allcmp.push_back(cmp);
            }
        }

        cout << "Calling circles for data set " << c++ << ":" << endl;
        for(int i=0; i<allcmp.size(); ++i){

            for(int j=0; j<allcmp[i].size(); ++j){
                if(j == 0) cout << reverse[ allcmp[i][j] ];
                else cout << ", " << reverse[ allcmp[i][j] ];
            }
            cout << endl;
        }

    }
    return 0;
}
