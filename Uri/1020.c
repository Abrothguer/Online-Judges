#include<stdio.h>

int main(){
    int t, a, m, d;
    scanf("%d", &t);
    a = t/365;
    t = t%365;
    m = t/30;
    d = t%30;
    printf("%d ano(s)\n", a);
    printf("%d mes(es)\n", m);
    printf("%d dia(s)\n", d);
    return 0;
}
