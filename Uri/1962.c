#include<stdio.h>
#include<stdlib.h>

int main(){
    unsigned int t, i, n, x, r;
    scanf("%d", &n);
    i = 0;
    while(i < n){
        scanf("%d", &x);
        if(x >= 2015){
            r = x - 2015 + 1;
            printf("%d A.C.\n", r);
        }
        else{
            r = 2015 - x;
            printf("%d D.C.\n", r);
        }
        i++;
    }
    return 0;
}
