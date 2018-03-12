#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, a, rep;
    cin >> t;
    while (t--) {
        cin >> n;
        map <int, bool> isin;
        rep = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a;
            if (isin[a]) {
                rep++;
            }
            else{
                isin[a] = true;
            }
        }
        cout << rep << endl;
    }
    return (0);
}
