#include<stdio.h>
#include<stdlib.h>

int main(){
    float d, l, v, t;
    scanf("%f %f", &t, &v);
    d = t*v;
    l = d/12;
    printf("%.3f\n", l);
    return 0;
}
