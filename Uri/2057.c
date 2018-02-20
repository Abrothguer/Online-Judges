#include<stdio.h>
#include<stdlib.h>

int main(){
    int s, t, f, hor;
    scanf("%d %d %d", &s, &t, &f);
    hor = s + t + f;
    if(hor >= 24){
        hor -= 24;
    }
    else if(hor < 0){
        hor += 24;
    }
    printf("%d\n", hor);
    return 0;
}
