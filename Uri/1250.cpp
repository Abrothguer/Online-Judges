#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t, hits, x;
    string moves;
    vector<int> v;
    ios::sync_with_stdio(false);
    cin >> n;
    while(n--){
        hits = 0;
        cin >> t;
        for(int i = 0; i < t; ++i){
            cin >> x;
            v.push_back(x);
        }
        cin >> moves;
        for(int i = 0; i < t; ++i){
            if(moves[i] == 'S' && (v[i] == 1 || v[i] == 2)){
                ++hits;
            }
            else if(moves[i] == 'J' && v[i] > 2){
                ++hits;
            }
        }
        cout << hits << endl;
        v.clear();
    }
    return 0;
}
