#include <bits/stdc++.h>
#define MAX 210

using namespace std;

vector <int> gp[MAX];
bool seen[MAX];
bool color[MAX];

int bicolor(int a, bool col){
    seen[a] = true;
    color[a] = col;

    for(int i=0; i<gp[a].size(); ++i){

        if(not seen[ gp[a][i] ]){
            if(not bicolor( gp[a][i], not col) ) return 0;
        }
        if(color[ gp[a][i] ] == col) return 0;
    }

    return 1;
}

int main(){
    int n, a, b, m;

    while(cin >> n, n){
        cin >> m;

        for(int i=0; i<n; ++i){
            seen[i] = false;
            gp[i].clear();
        }

        for(int i=0; i<m; ++i){
            cin >> a >> b;
            gp[a].push_back(b);
            gp[b].push_back(a);
        }

        if(bicolor(0, true)) cout << "BICOLORABLE." << endl;
        else cout << "NOT BICOLORABLE." << endl;
    }
    return 0;
}