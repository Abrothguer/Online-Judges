#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, s, x;
    scanf("%d %d %d", &t, &s, &x);
    if(t == x){
        printf("YES\n");
    }
    else{
        while(1){
            t += s;
            if(t == x || t+1 == x){
                printf("YES\n");
                break;
            }
            else if(t+1 > x){
                printf("NO\n");
                break;
            }
        }
    }
    return 0;
}
