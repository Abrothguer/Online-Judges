#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, i, maxnota, maxqtd, a;
    map <int, int> notas;
    cin >> n;
    maxnota = maxqtd = -1;
    while(n--){
        cin >> a;
        notas[a]++;
        if(notas[a] > maxqtd){
            maxqtd = notas[a];
            maxnota = a;
        }
        else if(notas[a] == maxqtd and a > maxnota){
            maxnota = a;
        }
    }
    cout << maxnota << endl;
    return 0;
}