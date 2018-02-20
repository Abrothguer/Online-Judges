#include<stdio.h>
#include<stdlib.h>

int main(){
    int p, x, a;
    x = 0;
    p = 0;
    while(x < 5){
        scanf("%d", &a);
        if(a%2 == 0){
            p++;
        }
        x++;
    }
    printf("%d valores pares\n", p);
    return 0;
}
