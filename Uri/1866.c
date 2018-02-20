#include<stdio.h>
#include<stdlib.h>

int main(){
    int c, n, i;
    scanf("%d", &c);
    i = 0;
    while(i < c){
        scanf("%d", &n);
        if(n%2 == 0){
            printf("0\n");
        }
        else if(n == 1 || n%2 != 0){
            printf("1\n");
        }
        i++;
    }
    return 0;
}
