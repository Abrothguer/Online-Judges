#include<stdio.h>

int main(){
    int n, x, y, k, i, s;
    scanf("%d", &n);
    k = 0;
    while(k < n){
        scanf("%d %d", &x, &y);
        if(x%2 == 0){
            x = x + 1;
        }
        i = 0;
        s = 0;
        while(i < y){
            s = s + x;
            x = x + 2;
            i++;
        }
        printf("%d\n", s);
        k++;
    }
    return 0;
}
