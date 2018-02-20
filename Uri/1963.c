#include<stdio.h>
#include<stdlib.h>

int main(){
    double p1, p2, au;
    scanf("%lf %lf", &p1, &p2);
    au = (100*(p2 - p1))/p1;
    printf("%.2lf%%\n", au);
    return 0;
}
