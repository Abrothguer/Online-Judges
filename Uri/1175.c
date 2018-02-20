#include<stdio.h>

int main(){
    int n[20], i, j, x, aux;
    i = 0;
    while(i < 20){
        scanf("%d", &x);
        n[i] = x;
        i++;
    }
    i = 0;
    j = 19;
    while(i < j){
        aux = n[i];
        n[i] = n[j];
        n[j] = aux;
        i++;
        j--;
    }
    i = 0;
    while(i < 20){
        printf("N[%d] = %d\n", i, n[i]);
        i++;
    }
    return 0;
}
