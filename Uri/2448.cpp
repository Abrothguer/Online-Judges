#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, val, cnt, ant;
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> n >> m;
    //   val,pos
    map <int,int> mp;
    int ord[n];
    for(int i=0; i<n; ++i){
        cin >> val;
        mp[val] = i;
        //cout << "val = " << val << " e pos = " << i << endl;
    }
    cnt = 0;
    ant = 0;
    for(int i=0; i<m; ++i){
        cin >> val;
        cnt += abs(mp[val]-ant);
        ant = mp[val];
    }
    cout << cnt << endl;
    return 0;
}