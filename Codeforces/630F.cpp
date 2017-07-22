#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n, aux, ans;
    scanf("%lld", &n);
    ans = 0LL;
    aux = 1LL;
    for(long long int i = 0; i < 5; ++i){
        aux *= n-i;
        aux /= i+1LL;
    }
    ans += aux;
    aux = 1LL;
    for(long long int i = 0; i < 6; ++i){
        aux *= n-i;
        aux /= i+1LL;
    }
    ans += aux;
    aux = 1LL;
    for(long long int i = 0; i < 7; ++i){
        aux *= n-i;
        aux /= i+1LL;
    }
    ans += aux;
    printf("%lld\n", ans);
    return 0;
}
