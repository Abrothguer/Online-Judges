#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pi 3.141592654

int main(){
    double t, d, e, h;
    while(scanf("%lf %lf %lf", &t, &d, &e) != EOF){
        h = tan(t*pi/180)*d + e;
        printf("%.2lf\n", h*5);
    }
    return 0;
}