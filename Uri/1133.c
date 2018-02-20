#include<stdio.h>
#include<stdlib.h>

int main(){
    int x, y, r, min, max;
    scanf("%d %d", &x, &y);
    if(x > y){
        max = x;
        min = y;
    }
    else{
        max = y;
        min = x;
    }
    min = min + 1;
    while(min < max){
        if(min%5 == 2 || min%5 == 3){
            printf("%d\n", min);
        }
        min++;
    }
    return 0;
}
