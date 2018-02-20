#include<stdio.h>
#include<stdlib.h>

int main(){

    int x, y;
    scanf("%d %d", &x, &y);

    if (y > x)
        printf("O JOGO DUROU %d HORA(S)\n", y - x);
    else
        printf("O JOGO DUROU %d HORA(S)\n", 24 - x + y);
}
