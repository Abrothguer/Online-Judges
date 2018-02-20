#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, j, n;
    while(scanf("%d", &n) != EOF){
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                if(i + j == n - 1){
                    printf("%d", 2);
                }
                else if(i == j){
                    printf("%d", 1);
                }
                else{
                    printf("%d", 3);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
