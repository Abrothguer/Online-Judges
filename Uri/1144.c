#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, k;
    while(1){
        scanf("%d", &n);
        if(n > 1 && n < 1000){
            break;
        }
    }
    k = 1;
    while(k <= n){
        printf("%d %d %d\n", k, k*k, k*k*k);
        printf("%d %d %d\n", k, (k*k)+1, (k*k*k)+1);
        k++;
    }
    return 0;
}
