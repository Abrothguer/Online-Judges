#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, j, n;
    while(scanf("%d", &n) != EOF){
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                if(j == i && j+i == n-1){
                    printf("4");
                }
                else if(j >= n/3 && i >= n/3 && (n-i-1) >= n/3 && (n-j-1) >= n/3){
                    printf("1");
                }
                else if(j == i){
                    printf("2");
                }
                else if(j+i == n-1){
                    printf("3");
                }
                else{
                    printf("0");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
