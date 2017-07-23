#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, a, b, c, cs;
    scanf("%d", &t);
    cs = 1;
    while(t--){
        scanf("%d %d %d", &a, &b, &c);
        if(a > b && b > c) printf("Case %d: %d\n", cs, b);
        else if(a > c && c > b) printf("Case %d: %d\n", cs, c);
        else if(b > a && a > c) printf("Case %d: %d\n", cs, a);
        else if(b > c && c > a) printf("Case %d: %d\n", cs, c);
        else if(c > b && b > a) printf("Case %d: %d\n", cs, b);
        else if(c > a && a > b) printf("Case %d: %d\n", cs, a);
        cs++;
    }
    return 0;
}
