#include<stdio.h>

int main(){
    int i, j;
    double m[12][12], med, sum, x;
    char o;
    scanf("%c", &o);
    sum = 0;
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%lf", &x);
            m[i][j] = x;
            if(i+j > 11 && i > j){
                sum += x;
            }
        }
    }
    if(o == 'S'){
        printf("%.1lf\n", sum);
    }
    else if(o == 'M'){
        med = sum/30;
        printf("%.1lf\n", med);
    }
    return 0;
}
