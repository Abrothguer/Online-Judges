#include<stdio.h>

int main(){
    int n[1000], i, t, imin, vmin, x;
    i = 0;
    scanf("%d", &t);
    while(i < t){
        scanf("%d", &x);
        n[i] = x;
        i++;
    }
    i = 0;
    imin = 0;
    vmin = n[0];
    while(i < t){
        if(vmin > n[i]){
            vmin = n[i];
            imin = i;
        }
        i++;
    }
    printf("Menor valor: %d\n", vmin);
    printf("Posicao: %d\n", imin);
    return 0;
}
