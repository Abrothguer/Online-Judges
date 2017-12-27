#include <bits/stdc++.h>
#define MAX 110

using namespace std;

vector <int> gp[MAX];
bool seen[MAX];
stack <int> stk;

void topsort(int a){
    seen[a] = true;

    for(int i=0; i<gp[a].size(); ++i){
        if(not seen[ gp[a][i] ]){
            topsort(gp[a][i]);
        }
    }

    stk.push(a);
    return;
}

int main(){
    int n, m, a, b;

    while(cin >> n >> m, n or m){

        for(int i=1; i<=n; ++i){
            seen[i] = false;
            gp[i].clear();
        }

        for(int i=0; i<m; ++i){
            cin >> a >> b;
            gp[a].push_back(b);
        }

        for(int i=1; i<=n; ++i){
            if(not seen[i]){
                topsort(i);
            }
        }

        while(not stk.empty()){
            cout << stk.top();
            stk.pop();
            if(stk.empty()) cout << endl;
            else cout << " ";
        }
    }

    return 0;
}