#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, di, fi, i, x;
    scanf("%d", &n);
    i = 0;
    di = 0;
    fi = 0;
    while(i < n){
        scanf("%d", &x);
        if(x >= 10 && x <= 20){
            di++;
        }
        else{
            fi++;
        }
        i++;
    }
    printf("%d in\n", di);
    printf("%d out\n", fi);
    return 0;
}
