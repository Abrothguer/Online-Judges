#include<stdio.h>

int main (){
    int n, h;
    float p, t;
    scanf("%d %d %f", &n, &h, &p);
    t = h * p;
    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2f\n", t);
    return 0;
}
