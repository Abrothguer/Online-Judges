#include <stdio.h>
#include <stdlib.h>

int main(){
    int x1, y1, x2, y2, resx, resy, ans;
    while(1){
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        if(x1 == y1 && y1 == x2 && x2 == y2 && y2 == 0){
            break;
        }
        else if(x1 == x2 && y1 == y2){
            ans = 0;
        }
        else if(x1 == x2 || y1 == y2){
            ans = 1;
        }
        else if(abs(x1-x2) == abs(y1-y2)){
            ans = 1;
        }
        else{
            ans = 2;
        }
        printf("%d\n", ans);
    }
    return 0;
}
