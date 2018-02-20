#include <bits/stdc++.h>

using namespace std;

int main(){
    int d, cost, max, x, prev;
    vector<int> v;
    ios::sync_with_stdio(false);
    while(cin >> d){
        cin >> cost;
        for(int i = 0; i < d; ++i){
            cin >> x;
            v.push_back(x-cost);
        }
        max = -2000;
        for(int i = 0; i < d; ++i){
            prev = 0;
            for(int j = i; j < d; ++j){
                if(v[j]+prev > max) max = v[j]+prev;
                prev = v[j]+prev;
            }
        }
        if(max < 0) max = 0;
        cout << max << endl;
        v.clear();
    }
    return 0;
}