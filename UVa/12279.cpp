#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, g, s, c = 1;
    while(scanf("%d", &n), n){
        g = s = 0;
        for(int i = 0; i < n; ++i){
            scanf("%d", &a);
            if(!a) ++g;
            else ++s;
        }
        printf("Case %d: %d\n", c++, s-g);
    }
    return 0;
}
