#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    string val, key;
    cin >> n;
    cin.ignore();
    map <string, string> mp;
    for(int i=0; i<n; ++i){
        getline(cin, key);
        getline(cin, val);
        mp[key] = val;
    }
    cin >> m;
    cin.ignore();
    for(int i=0; i<m; ++i){
        getline(cin, val);
        getline(cin, key);
        cout << val << endl << mp[key] << endl << endl;
    }
    return 0;
}