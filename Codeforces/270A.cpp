#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, a;
    double n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &a);
        n = -360.0/(a-180.0);
        if(n == ceil(n)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
