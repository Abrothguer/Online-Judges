#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, j;
    float m[12][12], x, sum, med;
    char op;
    scanf("%c", &op);
    sum = 0;
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%f", &x);
            m[i][j] = x;
            if(j > i){
                sum += x;
            }
        }
    }
    if(op == 'S'){
        printf("%.1f\n", sum);
    }
    else if(op == 'M'){
        med = sum/66;
        printf("%.1f\n", med);
    }
    return 0;
}
