#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, mn, mx;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        int v[n];
        mn = 100;
        mx = -1;
        for(int i = 0; i < n; ++i){
            scanf("%d", &v[i]);
            if(v[i] > mx) mx = v[i];
            if(v[i] < mn) mn = v[i];
        }
        printf("%d\n", (mx-mn)*2);
    }
    return 0;
}
