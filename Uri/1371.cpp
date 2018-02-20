#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, sq;
    while(scanf("%d", &n), n){
        sq = sqrt(n);
        for(int i = 1; i <= sq; ++i){
            if(i == 1) printf("1");
            else printf(" %d", i*i);
        }
        printf("\n");
    }
    return 0;
}
