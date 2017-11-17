#include <bits/stdc++.h>

using namespace std;

int main(){
    bool pr = true;
    int x;
    while(scanf("%d", &x) != EOF){
        if(x == 42) pr = false;
        if(pr){
            printf("%d\n", x);
        }
    }
    return 0;
}
