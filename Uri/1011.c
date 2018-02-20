#include<stdio.h>
#include<stdlib.h>

int main(){
    double r, pi, v;
    pi = 3.14159;
    scanf("%lf", &r);
    v = (4 * pi * (r * r * r))/3;
    printf("VOLUME = %.3lf\n", v);
}
