#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, c;
    scanf("%d", &n);
    while(n--){
        scanf("%d", &m);
        int vet[m], vst[m];
        for(int i = 0; i < m; ++i){
            scanf("%d", &vet[i]);
            vst[i] = vet[i];
        }
        sort(vst,vst+m,greater<int>());
        c = 0;
        for(int i = 0; i < m; ++i){
            if(vst[i] == vet[i]) ++c;
        }
        printf("%d\n", c);
    }
    return 0;
}
