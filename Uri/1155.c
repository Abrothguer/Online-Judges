#include<stdio.h>

int main(){
    float s, f, k;
    k = 1;
    s = 0;
    while(k <= 100){
        f = 1/k;
        s = s + f;
        k++;
    }
    printf("%.2f\n", s);
    return 0;
}
