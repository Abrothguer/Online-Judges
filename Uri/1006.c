#include<stdio.h>
#include<stdlib.h>

int main(){
    float a, b, c, x;
    scanf("%f %f %f", &a, &b, &c);
    a = 2 * a;
    b = 3 * b;
    c = 5 * c;
    x = (a + b + c)/10;
    printf("MEDIA = %.1f\n", x);
    return 0;
}
