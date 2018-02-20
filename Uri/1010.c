#include<stdio.h>
#include<stdlib.h>

int main(){
    int c1, c2, u1, u2;
    float p1, p2, t;
    scanf("%d %d %f %d %d %f", &c1, &u1, &p1, &c2, &u2, &p2);
    t = (p1 * u1) + (p2 * u2);
    printf("VALOR A PAGAR: R$ %.2f\n", t);
    return 0;
}
