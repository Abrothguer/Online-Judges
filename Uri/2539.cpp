#include <bits/stdc++.h>

using namespace std;

void updateBIT(int BIT[], int n, int cur, int val){
    while(cur <= n){
        BIT[cur] += val;
        cur = cur+(cur&(-cur));
    }
    return;
}

int sumBIT(int BIT[], int cur){
    int tot = 0;
    while(cur != 0){
        tot += BIT[cur];
        cur = cur-(cur&(-cur));
    }
    return tot;
}

int main(){
    int n;
    long long unsigned inv;
    while(scanf("%d", &n) != EOF){
        int v[n], BIT[n+1];
        for(int i = 0; i < n; ++i){
            scanf("%d", &v[i]);
            BIT[i] = 0;
        }
        BIT[n] = 0;
        inv = 0ULL;
        for(int i = 0; i < n; ++i){
            inv += sumBIT(BIT,v[i]-1);
            updateBIT(BIT,n,v[i],1);
        }
        printf("%llu\n", inv);
    }
    return 0;
}
