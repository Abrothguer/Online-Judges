#include<stdio.h>
#include<stdlib.h>
#define pi 3.14

int main(){
    double a, v, d, r, h;
    while(scanf("%lf %lf", &v, &d) != EOF){
        r = d/2;
        a = pi*(r*r);
        h = v/a;
        printf("ALTURA = %.2lf\n", h);
        printf("AREA = %.2lf\n", a);
    }
    return 0;
}
