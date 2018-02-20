#include<stdio.h>
#include<stdlib.h>

unsigned long long int fib(x);

int main(){
    unsigned long long int n, f;
    int t, i;
    scanf("%d", &t);
    i = 0;
    while(i < t){
        scanf("%llu", &n);
        if(n >= 0 && n <= 60){
            f = fib(n);
            printf("Fib(%llu) = %llu\n", n, f);
            i++;
        }
    }
    return 0;
}

unsigned long long int fib(x){
    unsigned long long int fib[60], k, fibx;
    fib[0] = 0;
    fib[1] = 1;
    k = 2;
    fibx = 0;
    while(k <= x){
        fib[k] = fib[k-2] + fib[k-1];
        fibx = fib[k-2] + fib[k-1];
        k++;
    }
    if(x == 1){
        fibx = 1;
    }
    return fibx;
}
