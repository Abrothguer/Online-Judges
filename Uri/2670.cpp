#include <bits/stdc++.h>

using namespace std;

int main(){
    int a1, a2, a3, v1, v2, v3;
    cin >> a1 >> a2 >> a3;
    v1 = a2*2 + a3*4;
    v2 = a1*2 + a3*2;
    v3 = a1*4 + a2*2;
    cout << min(v1,min(v2,v3)) << endl;
    return 0;
}