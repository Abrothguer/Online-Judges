#include<stdio.h>

int main(){
    int n, i, f;
    scanf("%d", &n);
    i = 0;
    f = 1;
    while(i < n){
        f = f * (n - i);
        i++;
    }
    printf("%d\n", f);
    return 0;
}
