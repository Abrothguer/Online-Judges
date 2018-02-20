#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, p, i, ct;
    string s, ax;
    bool inc;
    ios::sync_with_stdio(false);cin.tie(0);
    while(cin >> n){
        multiset <string> st;
        multiset <string> :: iterator it, nxt;
        for(i=0; i<n; ++i){
            cin >> s;
            st.insert(s);
        }
        //cout << "done";
        p = ct = 0;
        s.clear();
        nxt = st.begin();
        p = (*nxt).size();
        ++nxt;
        for(it=st.begin(); nxt!=st.end(); ++it, ++nxt){
            for(i=0; i<p; ++i){
                if((*nxt)[i] == (*it)[i]){
                    ++ct;
                }
                else break;
            }
        }
        cout << ct << endl;
    }
    return 0;
}