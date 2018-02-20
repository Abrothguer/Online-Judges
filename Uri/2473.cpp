#include <bits/stdc++.h>

using namespace std;

bool gues[110] = {false};

int main(){
    int c, a;
    for(int i=0; i<6; ++i){
        cin >> a;
        gues[a] = true;
    }
    c = 0;
    for(int i=0; i<6; ++i){
        cin >> a;
        if(gues[a]) ++c;
    }
    if(c == 6) cout << "sena" << endl;
    else if(c == 5) cout << "quina" << endl;
    else if(c == 4) cout << "quadra" << endl;
    else if(c == 3) cout << "terno" << endl;
    else cout << "azar" << endl;
    return 0;
}