#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, a, b, dx, dy;
    while(scanf("%d", &t), t){
        scanf("%d %d", &dx, &dy);
        while(t--){
            scanf("%d %d", &a, &b);
            if(a == dx || b == dy){
                printf("divisa\n");
            }
            else if(a > dx && b > dy){
                printf("NE\n");
            }
            else if(a > dx && b < dy){
                printf("SE\n");
            }
            else if(a < dx && b < dy){
                printf("SO\n");
            }
            else{
                printf("NO\n");
            }
        }
    }
    return 0;
}
