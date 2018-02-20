#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t, m, c, pts;
    char p;
    string s;
    ios::sync_with_stdio(false);cin.tie(0);

    while(cin >> n, n){
        map<char,int> mp;
        c = pts = 0;

        for(int i=0; i<n; ++i){
            cin >> p >> m >> s;
            if(s == "correct" and mp[p] != -1){
                c++;
                pts += m + mp[p]*20;
                mp[p] = -1;
            }
            else if(mp[p] != -1){
                mp[p]++;
            }
        }
        cout << c << " " << pts << endl;

    }
    return 0;
}
