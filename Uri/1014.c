#include<stdio.h>
#include<stdlib.h>

int main(){
    int d;
    float g, c;
    scanf("%d %f", &d, &g);
    c = d / g;
    printf("%.3f km/l\n", c);
    return 0;
}
