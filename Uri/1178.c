#include<stdio.h>
#include<stdlib.h>

int main(){
    double n[100], t;
    int i;
    scanf("%lf", &t);
    n[0] = t;
    i = 0;
    printf("N[%d] = %.4lf\n", i, n[i]);
    while(i < 100){
        if(n[i] < 0.0001){
            n[i+1] = 0.0;
            printf("N[%d] = %.4lf\n", i+1, n[i+1]);
        }
        else if(n[i] >= 0.0001){
            n[i+1] = n[i]/2;
            printf("N[%d] = %.4lf\n", i+1, n[i+1]);
        }
        if(i == 98){
            break;
        }
        i++;
    }
    return 0;
}
