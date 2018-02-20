#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, n, l, mul2, mul3, mul4, mul5;
    scanf("%d", &n);
    mul2 = 0;
    mul3 = 0;
    mul4 = 0;
    mul5 = 0;
    i = 0;
    while(i < n){
        scanf("%d", &l);
        if(l%4 == 0 && l >= 4){
            mul4++;
        }
        if(l%5 == 0 && l >= 5){
            mul5++;
        }
        if(l%3 == 0 && l >= 3){
            mul3++;
        }
        if(l%2 == 0 && l >= 2){
            mul2++;
        }
        i++;
    }
    printf("%d Multiplo(s) de 2\n", mul2);
    printf("%d Multiplo(s) de 3\n", mul3);
    printf("%d Multiplo(s) de 4\n", mul4);
    printf("%d Multiplo(s) de 5\n", mul5);
    return 0;
}
