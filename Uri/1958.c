#include<stdio.h>

int main(){
    long double x;
    scanf("%LE", &x);
    if(x > 0){
        printf("+");
    }
    else{
        printf("-");
    }
    printf("%.4LE\n", x);
    return 0;
}
