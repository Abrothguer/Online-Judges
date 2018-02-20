#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, j, n, k, min;
    while(1){
        while(1){
            scanf("%d", &n);
            if(n >= 0 && n <= 100){
                break;
            }
        }
        if(n == 0){
            break;
        }
        k = 1;
        min = 0;
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                min = j;
                if(min > i){
                    min = i;
                }
                if(min > n - j - 1){
                    min = n - j - 1;
                }
                if(min > n - i - 1){
                    min = n - i - 1;
                }
                if(j == 0){
                    printf("%3d", k+min);
                }
                else{
                    printf(" %3d", k+min);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
