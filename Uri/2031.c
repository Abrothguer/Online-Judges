#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, i;
    char ply1[10], ply2[10];
    scanf("%d", &n);
    i = 0;
    while(i < n){
        scanf("%s %s", ply1, ply2);
        if(strcmp(ply1,ply2) == 0){
            if(strcmp(ply1,"ataque") == 0){
                printf("Aniquilacao mutua\n");
            }
            else if(strcmp(ply1,"pedra") == 0){
                printf("Sem ganhador\n");
            }
            else if(strcmp(ply1,"papel") == 0){
                printf("Ambos venceram\n");
            }
        }
        else{
            if(strcmp(ply1,"ataque") == 0){
                printf("Jogador 1 venceu\n");
            }
            else if(strcmp(ply1,"pedra") == 0){
                if(strcmp(ply2,"papel") == 0){
                    printf("Jogador 1 venceu\n");
                }
                else{
                    printf("Jogador 2 venceu\n");
                }
            }
            else if(strcmp(ply1,"papel") == 0){
                printf("Jogador 2 venceu\n");
            }
        }
        i++;
    }
    return 0;
}
