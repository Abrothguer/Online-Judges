#include<stdio.h>
#include<stdlib.h>

int main(){
    int ca, cd, cg, x;
    ca = 0;
    cd = 0;
    cg = 0;
    while(1){
        while(1){
            scanf("%d", &x);
            if(x == 1 || x == 2 || x == 3 || x == 4){
                break;
            }
        }
        if(x == 4){
            break;
        }
        else if(x == 1){
            ca++;
        }
        else if(x == 2){
            cg++;
        }
        else if(x == 3){
            cd++;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", ca);
    printf("Gasolina: %d\n", cg);
    printf("Diesel: %d\n", cd);
    return 0;
}
