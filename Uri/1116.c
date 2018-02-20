#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, i;
    float x, y;
    scanf("%d", &n);
    i = 0;
    while(i < n){
        scanf("%f %f", &x, &y);
        if(y == 0){
            printf("divisao impossivel\n");
        }
        else{
            printf("%.1f\n", x/y);
        }
        i++;
    }
    return 0;
}
