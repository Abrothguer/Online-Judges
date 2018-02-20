#include<stdio.h>
#include<stdlib.h>

int main(){
    int x, i;
    scanf("%d", &x);
    if(x%2 == 0){
        x = x + 1;
    }
    i = 0;
    while(i < 6){
        printf("%d\n", x);
        i++;
        x = x + 2;
    }
    return 0;
}
