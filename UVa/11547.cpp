#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, ans;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        ans = (((((((n*567)/9)+7492)*235)/47)-498)/10)%10;
        printf("%d\n", abs(ans));
    }
    return 0;
}
