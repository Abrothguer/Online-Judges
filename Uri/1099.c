#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, x, y, i, max, min, si;
    scanf("%d", &n);
    i = 0;
    while(i < n){
        scanf("%d %d", &x, &y);
        if(x > y){
            max = x;
            min = y;
        }
        else{
            max = y;
            min = x;
        }
        min++;
        si = 0;
        while(min < max){
            if(min%2 != 0){
                si += min;
            }
            min++;
        }
        printf("%d\n", si);
        i++;
    }
    return 0;
}
