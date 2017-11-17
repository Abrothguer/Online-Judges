#include <bits/stdc++.h>

#define N 10000
#define M 10000

using namespace std;

int minimum_change(int coin[], int val, int siz){
    int memo[val+1];
    memo[0] = 0;
    for(int i=1; i<=val; ++i){
        memo[i] = 1000000;
    }

    for(int i=1; i<=val; ++i){
        for(int j=0; j<siz; ++j){
            if(coin[j] <= i){
                if(memo[i-coin[j]] != 1000000 and memo[i-coin[j]]+1 < memo[i]){
                    memo[i] = memo[i-coin[j]]+1;
                }   
            }
        }
    }
    return memo[val];
}

int main(){
    int n, v, ans;
    vector<int> coin;
    while(cin >> n, n){
        cin >> v;
        int coin[v];
        for(int i=0; i<v; ++i){
            cin >> coin[i];
        }
        ans = minimum_change(coin, n, v);
        if(ans == 1000000) cout << "Impossivel" << endl;
        else cout << ans << endl;
    }
    return 0;
}