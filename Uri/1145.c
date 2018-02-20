#include<stdio.h>
#include<stdlib.h>

int main(){
    int x, y, k;
    while(1){
        scanf("%d %d", &x, &y);
        if(y > x && x > 1 && x < 20 && y < 100000){
            break;
        }
    }
    k = 1;
    while(k <= y){
        if(k%x == 1){
            printf("%d", k);
        }
        else{
            printf(" %d", k);
        }
        if(k%x == 0){
                printf("\n");
        }
        k++;
    }
    return 0;
}
