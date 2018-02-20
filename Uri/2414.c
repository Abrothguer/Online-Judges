#include <stdio.h>
#include <stdlib.h>

int main(){
    int max, c;
    max = 0;
    while(1){
        scanf("%d", &c);
        if(c == 0) break;
        if(c > max) max = c;
    }
    printf("%d\n", max);
    return 0;
}