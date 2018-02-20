#include<stdio.h>
#include<stdlib.h>

int main(){
    int x, q;
    double t;
    scanf("%d %d", &x, &q);
    if(x == 1){
        t = q * 4.00;
    }
    else if(x == 2){
        t = q * 4.50;
    }
    else if(x == 3){
        t = q * 5.00;
    }
    else if(x == 4){
        t = q * 2.00;
    }
    else{
        t = q * 1.50;
    }
    printf("Total: R$ %.2lf\n", t);
    return 0;
}
