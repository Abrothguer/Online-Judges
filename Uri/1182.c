#include<stdio.h>

int main(){
    int i, col, j;
    float m[12][12], med, sum, x;
    char o;
    scanf("%d %c", &col, &o);
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%f", &x);
            m[i][j] = x;
        }
    }
    if(o == 'S'){
        i = 0;
        sum = 0;
        while(i < 12){
            sum += m[i][col];
            i++;
        }
        printf("%.1f\n", sum);
    }
    else if(o == 'M'){
        i = 0;
        sum = 0;
        while(i < 12){
            sum += m[i][col];
            i++;
        }
        med = sum/12;
        printf("%.1f\n", med);
    }
    return 0;
}
