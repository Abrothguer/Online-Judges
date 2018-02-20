#include<stdio.h>

int main(){
    int n, d, k;
    scanf("%d", &n);
    printf("%d\n", 1);
    k = 2;
    while(k <= (n/2)){
        if(n%k == 0){
            printf("%d\n", k);
        }
        k++;
    }
    printf("%d\n", n);
    return 0;
}
