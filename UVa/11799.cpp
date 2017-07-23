#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, max, a, cs;
    scanf("%d", &t);
    cs = 1;
    while(t--){
        scanf("%d", &n);
        max = -1;
        while(n--){
            scanf("%d", &a);
            if(a > max) max = a;
        }
        printf("Case %d: %d\n", cs++, max);
    }
    return 0;
}
