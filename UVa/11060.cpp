#include <bits/stdc++.h>

#define MAX 110

using namespace std;

vector <int> graph[MAX];

int main(){
    int n, m, c;
    c = 1;
    while(cin >> n){

        list <int> bevs;
        list <int> :: iterator it;
        int indegree[n];

        for(int i=0; i<n; ++i){
            indegree[i] = 0;
            graph[i].clear();
            bevs.push_back(i);
        }

        map <string, int> dict;
        map <int, string> rdict;
        string s1, s2;

        for(int i=0; i<n; ++i){
            cin >> s1;
            dict[s1] = i;
            rdict[i] = s1;
        }

        cin >> m;
        for(int i=0; i<m; ++i){
            cin >> s1 >> s2;
            graph[ dict[s1] ].push_back( dict[s2] );
            indegree[ dict[s2] ]++;
        }

        cout << "Case #" << c++ << ": Dilbert should drink beverages in this order:";

        while(not bevs.empty()){

            for(it=bevs.begin(); it!=bevs.end(); ++it){

                if(indegree[ *it ] <= 0){

                    for(int i=0; i<graph[*it].size(); ++i){

                        indegree[ graph[*it][i] ]--;
                    }

                    cout << ' ' << rdict[ *it ];
                    bevs.erase(it);
                    break;
                }
            }
        }
        cout << '.' << endl << endl;

    }
    return 0;
}
