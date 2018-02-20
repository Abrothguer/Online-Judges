#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, i, k;
    scanf("%d", &n);
    i = 0;
    k = 1;
    while(i < n){
        printf("%d %d %d PUM\n", k, k+1, k+2);
        k += 4;
        i++;
    }
    return 0;
}
