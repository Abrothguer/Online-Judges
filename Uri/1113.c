#include<stdio.h>
#include<stdlib.h>

int main(){
    int x, y;
    while(1){
        scanf("%d %d", &x, &y);
        if(x == y){
            break;
        }
        else if(x > y){
            printf("Decrescente\n");
        }
        else if(y > x){
            printf("Crescente\n");
        }
    }
    return 0;
}
