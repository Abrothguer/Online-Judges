#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, i;
    scanf("%d", &n);
    i = 1;
    while(i <= 10000){
        if(i%n == 2){
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}
