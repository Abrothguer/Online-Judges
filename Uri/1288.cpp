#include <bits/stdc++.h>

using namespace std;

//VALUE WEIGHT

int knapsack(int n, int p, vector< pair<int,int> >v){
    int mat[n+1][p+1];

    for(int i = 0; i <= n; ++i){
        for(int j = 0; j <= p; ++j){
            if(!i || !j) mat[i][j] = 0;
            else if(v[i-1].second > j){
                mat[i][j] = mat[i-1][j];
            }
            else{
                mat[i][j] = max(mat[i-1][j],v[i-1].first + mat[i-1][j-v[i-1].second]);
            }
        }
    }

    return mat[n][p];
}

int main(){
    int t, n, p, r, a, b;
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> t;
    while(t--){
        cin >> n;
        vector< pair<int,int> >v;
        for(int i = 0; i < n; ++i){
            cin >> a >> b;
            v.push_back(make_pair(a,b));
        }
        cin >> p >> r;
        if(knapsack(n,p,v) >= r){
            cout << "Missao completada com sucesso" << endl;
        }
        else{
            cout << "Falha na missao" << endl;
        }
    }
    return 0;
}
