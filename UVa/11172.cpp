#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, x, y;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &x, &y);
        if(x > y){
            printf(">\n");
        }
        else if(x < y){
            printf("<\n");
        }
        else{
            printf("=\n");
        }
    }
    return 0;
}
