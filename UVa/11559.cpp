#include <bits/stdc++.h>

using namespace std;

int main(){
    int h, n, w, b;
    int ph, pw, min, aux;

    while(cin >> n >> b >> h >> w){
        
        if(not h) break;

        min = 10101010;
        for(int i=0; i<h; ++i){
            cin >> ph;

            for(int j=0; j<w; ++j){
                cin >> pw; 
                if(pw < n) continue;
                aux = ph*n;
                if(aux < b and aux < min) min = aux;
            }
        }

        if(min == 10101010) cout << "stay home" << endl;
        else cout << min << endl;
    }
    return 0;
}