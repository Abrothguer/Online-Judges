#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    while(scanf("%lld", &n)){
        if(n < 0) break;
        if(n){
            printf("%lld\n", (n*(n+1)/2)+1);
        }
        else{
            printf("1\n");
        }

    }
    return 0;
}
