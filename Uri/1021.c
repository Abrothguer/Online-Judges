#include<stdio.h>

int main(){
    int m, ce, ci, vi, de, co, ds, mur, mci, mvc, mde, mco, muc;
    double n;
    scanf("%lf", &n);
    n = n * 100;
    m = (int)n;
    ce = m/10000;
    m = m%10000;
    ci = m/5000;
    m = m%5000;
    vi = m/2000;
    m = m%2000;
    de = m/1000;
    m = m%1000;
    co = m/500;
    m = m%500;
    ds = m/200;
    m = m%200;
    mur = m/100;
    m = m%100;
    mci = m/50;
    m = m%50;
    mvc = m/25;
    m = m%25;
    mde = m/10;
    m = m%10;
    mco = m/5;
    muc = m%5;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", ce);
    printf("%d nota(s) de R$ 50.00\n", ci);
    printf("%d nota(s) de R$ 20.00\n", vi);
    printf("%d nota(s) de R$ 10.00\n", de);
    printf("%d nota(s) de R$ 5.00\n", co);
    printf("%d nota(s) de R$ 2.00\n", ds);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", mur);
    printf("%d moeda(s) de R$ 0.50\n", mci);
    printf("%d moeda(s) de R$ 0.25\n", mvc);
    printf("%d moeda(s) de R$ 0.10\n", mde);
    printf("%d moeda(s) de R$ 0.05\n", mco);
    printf("%d moeda(s) de R$ 0.01\n", muc);
    return 0;
}
