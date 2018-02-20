#include<stdio.h>
#include<stdlib.h>

int main(){
    unsigned long long int n;
    scanf("%llu", &n);
    while(1){
        printf("%lld", n%10);
        n = n/10;
        if(n == 0){
            break;
        }
    }
    printf("\n");
    return 0;
}
