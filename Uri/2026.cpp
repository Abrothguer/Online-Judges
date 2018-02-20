#include <bits/stdc++.h>

using namespace std;
//VALUE WEIGHT

int knapsack(int n, int p, vector< pair <int,int> > v){
    int wei, val, df;
    int mat[n+1][p+1];

    for(int i = 0; i < n+1; ++i){
        for(int j = 0; j < p+1; ++j){
            if(!i || !j) mat[i][j] = 0;
            else{
                df = 0;
                val = v[i-1].first;
                wei = v[i-1].second;
                if(wei <= j) df = val + mat[i-1][j-wei];
                if(df < mat[i-1][j]) df = mat[i-1][j];
                mat[i][j] = df;
            }
        }
    }
    return mat[n][p];
}

int main(){
    int t, n, p, a, b;
    cin >> t;
    for(int i = 1; i <= t; ++i){
        cin >> n >> p;
        vector< pair<int,int> > v;
        for(int j = 0; j < n; ++j){
            cin >> a >> b;
            v.push_back(make_pair(a,b));
        }
        cout << "Galho " << i << ":" << endl;
        cout << "Numero total de enfeites: " << knapsack(n,p,v) << endl << endl;
    }
    return 0;
}
