#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, r, i;
    while(1){
        scanf("%d", &n);
        if(n > 1 && n < 1000){
            break;
        }
    }
    i = 1;
    while(i <= 10){
        r = i*n;
        printf("%d x %d = %d\n", n, i, r);
        i++;
    }
    return 0;
}
