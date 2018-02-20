#include<stdio.h>

int main(){
    float i, s, a, m, k;
    s = 0;
    k = 0;
    while(1){
        scanf("%f", &i);
        if(i < 0){
            break;
        }
        else{
            s = s + i;
            k = k + 1;
        }
    }
    m = s/k;
    printf("%.2f\n", m);
    return 0;
}
