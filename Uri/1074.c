#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, i, x;
    scanf("%d", &n);
    i = 0;
    while(i < n){
        scanf("%d", &x);
        if(x == 0){
            printf("NULL\n");
        }
        else if(x > 0 && x%2 == 0){
            printf("EVEN POSITIVE\n");
        }
        else if(x > 0 && x%2 != 0){
            printf("ODD POSITIVE\n");
        }
        else if(x < 0 && x%2 == 0){
            printf("EVEN NEGATIVE\n");
        }
        else if(x < 0 && x%2 != 0){
            printf("ODD NEGATIVE\n");
        }
        i++;
    }
    return 0;
}
