#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, m, c, a;
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> t;
    while(t--){
        cin >> m >> c;
        vector<int> v[m];
        for(int i = 0; i < c; ++i){
            cin >> a;
            v[a%m].push_back(a);
        }
        for(int i = 0; i < m; ++i){
            cout << i << " -> ";
            for(int j = 0; j < v[i].size(); ++j){
                cout << v[i][j] << " -> ";
            }
            cout << "\\" << endl;
        }
        if(t) cout << endl;
    }
    return 0;
}
