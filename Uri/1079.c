#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, i;
    float f1, f2, f3, m;
    scanf("%d", &n);
    i = 0;
    while(i < n){
        scanf("%f %f %f", &f1, &f2, &f3);
        m = ((f1*2) + (f2*3) + (f3*5))/10;
        printf("%.1f\n", m);
        i++;
    }
    return 0;
}
