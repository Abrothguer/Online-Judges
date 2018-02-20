#include<stdio.h>

int main(){
    unsigned int n, l, per;
    scanf("%u %u", &n, &l);
    if(n >= 3 && n <= 1000000 && l >= 1 && l <= 4000){
        per = n*l;
        printf("%u\n", per);
    }
    return 0;
}
