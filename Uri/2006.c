#include<stdio.h>
#include<stdlib.h>

int main(){
    int t, i, n, acm;
    scanf("%d", &t);
    i = 0;
    acm = 0;
    while(i < 5){
        scanf("%d", &n);
        if(n == t){
            acm++;
        }
        i++;
    }
    printf("%d\n", acm);
    return 0;
}
