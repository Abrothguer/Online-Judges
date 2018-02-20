#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, n;
    char quo[34] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    scanf("%d", &n);
    i = 0;
    while(i < n){
        printf("%c", quo[i]);
        i++;
    }
    printf("\n");
    return 0;
}
