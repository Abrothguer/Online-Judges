#include<stdio.h>

int main(){
    int n, x, i, s, j;
    scanf("%d", &n);
    i = 0;
    while(i < n){
        scanf("%d", &x);
        if(x == 2){
            printf("%d eh primo\n", x);
        }
        else if(x%2 == 0 || x == 1){
            printf("%d nao eh primo\n", x);
        }
        else{
            s = 0;
            j = 3;
            while(j <= x/2){
                if(x%j == 0){
                    printf("%d nao eh primo\n", x);
                    break;
                }
                j++;
                s++;
            }
            if(s > 0){
                printf("%d eh primo\n", x);
            }
        }
        i++;
    }
    return 0;
}
