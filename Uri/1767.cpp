#include <bits/stdc++.h>

using namespace std;

//VALUE WEIGHT

void knapsack(int n, int p, vector< pair<int,int> > v){
    int mat[n+1][p+1];
    for(int i = 0; i <= n; ++i){
        for(int j = 0; j <= p; ++j){
            if(!i || !j){
                mat[i][j] = 0;
            }
            else if(v[i-1].second > j){
                mat[i][j] = mat[i-1][j];
            }
            else{
                mat[i][j] = max(mat[i-1][j], v[i-1].first + mat[i-1][j-v[i-1].second]);
            }
        }
    }
    cout << mat[n][p] << " brinquedos" << endl;
    int j = p, wei = 0, pacs = 0;
    for(int i = n; i > 0; --i){
        if(mat[i][j] != mat[i-1][j]){
            //cout << v[i-1].first << " entra com " << v[i-1].second << endl;
            ++pacs;
            wei += v[i-1].second;
            j = j-v[i-1].second;
        }
    }
    cout << "Peso: " << wei << " kg" << endl;
    cout << "sobra(m) " << n-pacs << " pacote(s)" << endl;

    return ;
}

int main(){
    int t, n, p, a, b;
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> t;
    while(t--){
        cin >> n;
        vector< pair<int,int> > v;
        for(int i = 0; i < n; ++i){
            cin >> a >> b;
            v.push_back(make_pair(a,b));
        }
        knapsack(n,50,v);
        cout << endl;
    }
    return 0;
}