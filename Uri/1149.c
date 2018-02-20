#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, n, i, s;
    scanf("%d", &a);
    while(1){
        scanf("%d", &n);
        if(n > 0){
            break;
        }
    }
    s = 0;
    i = 1;
    while(i <= n){
        s += a;
        i++;
        a++;
    }
    printf("%d\n", s);
    return 0;
}
