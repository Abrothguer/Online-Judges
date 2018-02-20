#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, ce, ci, vi, de, co, ds, um;
    scanf("%d", &n);
    ce = n/100;
    n = n%100;
    ci = n/50;
    n = n%50;
    vi = n/20;
    n = n%20;
    de = n/10;
    n = n%10;
    co = n/5;
    n = n%5;
    ds = n/2;
    um = n%2;
    printf("%d nota(s) de R$ 100,00\n", ce);
    printf("%d nota(s) de R$ 50,00\n", ci);
    printf("%d nota(s) de R$ 20,00\n", vi);
    printf("%d nota(s) de R$ 10,00\n", de);
    printf("%d nota(s) de R$ 5,00\n", co);
    printf("%d nota(s) de R$ 2,00\n", ds);
    printf("%d nota(s) de R$ 1,00\n", um);
    return 0;
}
