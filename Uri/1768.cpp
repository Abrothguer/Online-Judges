#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, spc, ast;
    ios::sync_with_stdio(false);cin.tie(0);
    while(cin >> n){
        for(ast = 1, spc = n/2; ast <= n; ast += 2, spc -= 1){
            for(int i = 0; i < spc; ++i) cout << " ";
            for(int i = 0; i < ast; ++i) cout << "*";
            cout << endl;
        }
        for(ast = 1, spc = n/2; ast <= 3; ast += 2, spc -= 1){
            for(int i = 0; i < spc; ++i) cout << " ";
            for(int i = 0; i < ast; ++i) cout << "*";
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
