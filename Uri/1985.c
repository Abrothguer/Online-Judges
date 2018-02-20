#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, q, i, x;
    float soma;
    scanf("%d", &n);
    i = 0;
    soma = 0;
    while(i < n){
        scanf("%d %d", &x, &q);
        if(x == 1001){
            soma = soma + (1.5*q);
        }
        else if(x == 1002){
            soma = soma + (2.5*q);
        }
        else if(x == 1003){
            soma = soma + (3.5*q);
        }
        else if(x == 1004){
            soma = soma + (4.5*q);
        }
        else if(x == 1005){
            soma = soma + (5.5*q);
        }
        i++;
    }
    printf("%.2f\n", soma);
    return 0;
}
