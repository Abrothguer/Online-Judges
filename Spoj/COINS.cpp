#include <bits/stdc++.h>

using namespace std;

map <long long int, long long int> memo;

long long int dp(long long int n){
    if (not n) {
        return (0LL);
    }
    if (not memo[n]) {
        memo[n] = max(n, dp(n / 2LL) + dp(n / 3LL) + dp(n / 4LL) );
    }

    return (memo[n]);
}

int main(){
    long long int n;
    while (cin >> n) {
        cout << dp(n) << endl;
    }
    return (0);
}
