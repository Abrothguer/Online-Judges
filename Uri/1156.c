#include<stdio.h>

int main(){
    float s, k, i, f;
    s = 0;
    i = 1;
    k = 1;
    while(k <= 39){
        f = k/i;
        s = s + f;
        k = k + 2;
        i = 2*i;
    }
    printf("%.2f\n", s);
    return 0;
}
