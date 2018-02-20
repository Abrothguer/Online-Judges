#include<stdio.h>
#include<stdlib.h>

int main(){
    double a, b, c, t, x, tp, q, r, pi;
    pi = 3.14159;
    scanf("%lf %lf %lf", &a, &b, &c);
    t = (a * c)/2;
    x = pi * c * c;
    tp = ((a + b) * c)/2;
    q = b * b;
    r = a * b;
    printf("TRIANGULO: %.3lf\n", t);
    printf("CIRCULO: %.3lf\n", x);
    printf("TRAPEZIO: %.3lf\n", tp);
    printf("QUADRADO: %.3lf\n", q);
    printf("RETANGULO: %.3lf\n", r);
    return 0;
}
