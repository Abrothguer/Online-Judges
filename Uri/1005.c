#include<stdio.h>
#include<stdlib.h>

int main(){
    double x, y, a;
    scanf("%lf %lf", &x, &y);
    x = x * 3.5;
    y = y * 7.5;
    a = (x + y)/11;
    printf("MEDIA = %.5lf\n", a);
    return 0;
}
