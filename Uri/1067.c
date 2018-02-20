#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, i;
    scanf("%d", &n);
    i = 0;
    while(i <= n){
        if(i%2 != 0){
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}
