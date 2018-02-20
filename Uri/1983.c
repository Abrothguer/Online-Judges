#include<stdio.h>
#include<stdlib.h>

int main(){
    long long int mat, matsel;
    int i, n;
    double not, manot;
    scanf("%d", &n);
    manot = 0;
    matsel = 0;
    i = 0;
    while(i < n){
        scanf("%lld %lf", &mat, &not);
        if(not > manot){
            manot = not;
            matsel = mat;
        }
        i++;
    }
    if(manot < 8){
        printf("Minimum note not reached\n");
    }
    else{
        printf("%lld\n", matsel);
    }
    return 0;
}
