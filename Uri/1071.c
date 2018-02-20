#include<stdio.h>
#include<stdlib.h>

int main(){
    int x, y, max, min, i, s;
    scanf("%d %d", &x, &y);
    if(x > y){
        max = x;
        min = y;
    }
    else{
        max = y;
        min = x;
    }
    i = min + 1;
    s = 0;
    while(i < max){
        if(i%2 != 0){
            s = s + i;
        }
        i++;
    }
    printf("%d\n", s);
    return 0;
}
