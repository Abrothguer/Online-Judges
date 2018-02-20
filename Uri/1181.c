#include<stdio.h>

int main(){
    int i, lin, j;
    float m[12][12], med, sum, x;
    char o;
    scanf("%d %c", &lin, &o);
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%f", &x);
            m[i][j] = x;
        }
    }
    if(o == 'S'){
        j = 0;
        sum = 0;
        while(j < 12){
            sum += m[lin][j];
            j++;
        }
        printf("%.1f\n", sum);
    }
    else if(o == 'M'){
        j = 0;
        sum = 0;
        while(j < 12){
            sum += m[lin][j];
            j++;
        }
        med = sum/12;
        printf("%.1f\n", med);
    }
    return 0;
}
