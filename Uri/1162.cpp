#include <bits/stdc++.h>

using namespace std;

int main(){

    int v[60], t, n, aux, sp;
    ios::sync_with_stdio(false); cin.tie(0);
    cin >> t;
    for(int k = 0; k < t; ++k){
        cin >> n;
        sp = 0;
        for(int i = 0; i < n; ++i){
            cin >> v[i];
        }

        for(int i = 0; i < n; ++i){
            for(int j = i+1; j < n; ++j){
                if(v[i] > v[j]){
                    ++sp;
                    aux = v[i];
                    v[i] = v[j];
                    v[j] = aux;
                }
            }
        }
        cout << "Optimal train swapping takes " << sp << " swaps." << endl;
    }
    return 0;
}
