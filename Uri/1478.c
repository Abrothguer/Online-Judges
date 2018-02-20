#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, j, dist, n;
    while(1){
        while(1){
            scanf("%d", &n);
            if(n <= 100 && n >= 0){
                break;
            }
        }
        if(n == 0){
            break;
        }
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                dist = abs(i-j);
                if(j == 0){
                    printf("%3d", dist+1);
                }
                else{
                    printf(" %3d", dist+1);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
