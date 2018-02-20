#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, x1, x2, i, xt, a;
    x1 = 0;
    x2 = 1;
    while(1){
        scanf("%d", &n);
        if(n > 0 && n < 46){
            break;
        }
    }
    i = 0;
    while(i < n){
        if(i == 0){
            printf("%d", i);
        }
        else if(i == 1){
            printf(" %d", i);
        }
        else{
            xt = x1 + x2;
            printf(" %d", xt);
            a = x2;
            x1 = a;
            x2 = xt;
        }
        i++;
    }
    printf("\n");
    return 0;
}
