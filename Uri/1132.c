#include<stdio.h>
#include<stdlib.h>

int main(){
    int x, y, min, max, s;
    scanf("%d %d", &x, &y);
    if(x > y){
        max = x;
        min = y;
    }
    else{
        max = y;
        min = x;
    }
    s = 0;
    while(min <= max){
        if(min%13 != 0){
            s += min;
        }
        min++;
    }
    printf("%d\n", s);
    return 0;
}
