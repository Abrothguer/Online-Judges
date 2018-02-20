#include<stdio.h>

int main(){
    char n;
    double s, v, f;
    scanf("%s %lf %lf", &n, &s, &v);
    v = (15 * v)/100;
    f = s + v;
    printf("TOTAL = R$ %.2lf\n", f);
    return 0;
}
