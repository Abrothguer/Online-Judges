#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        cout << ceil(n*1.0/m) << endl;
    }
    return 0;
}
