#include<stdio.h>

int main(){
    int n, i, x, def;
    scanf("%d", &n);
    int vet[n];
    for(i = 0; i < n; i++){
        scanf("%d", &x);
        vet[i] = x;
    }
    def = 0;
    for(i = 1; i < n; i++){
        if(vet[i] < vet[i-1]){
            def = i+1;
            break;
        }
    }
    printf("%d\n", def);
    return 0;
}
