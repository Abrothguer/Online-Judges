#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, k, m, a;
    double val;
    char c;
    string s;
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> t;
    while(t--){
        cin >> k;
        map <char, int> mp;
        while(k--){
            cin.ignore();
            cin >> c >> a;
            mp[c] = a;
        }
        cin >> m;
        cin.ignore();
        val = 0.0;
        while(m--){
            getline(cin, s);
            for(int i = 0; i < s.size(); ++i){
                val += mp[s[i]];
            }
            //cout << "val = " << val << endl;
        }
        cout << setprecision(2) << fixed << val/100.0 << "$" << endl;
    }
    return 0;
}
