#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, a, s;
    int vet[211] = {0};
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        while(n--){
            scanf("%d", &a);
            vet[a-20]++;
        }
        s = 0;
        for(int i = 0; i < 211; ++i){
            while(vet[i]){
                if(s) printf(" %d", i+20);
                else printf("%d", i+20), s++;
                --vet[i];
            }
        }
        printf("\n");
    }
    return 0;
}
