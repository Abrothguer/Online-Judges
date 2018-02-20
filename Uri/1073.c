#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, i, p;
    scanf("%d", &n);
    i = 2;
    while(i <= n){
        if(i%2 == 0){
            p = i * i;
            printf("%d^2 = %d\n", i, p);
        }
        i++;
    }
    return 0;
}
