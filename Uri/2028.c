#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, x, v[100000], j, i, t, c;
    c = 1;
    while(scanf("%d", &n) != EOF){
        i = 1;
        j = i;
        v[0] = 0;
        t = 1;
        while(i <= n){
            v[t] = i;
            j--;
            if(j == 0){
                i++;
                j = i;
            }
            t++;
        }
        if(t == 1){
            printf("Caso %d: %d numero\n", c, t);
            printf("0");
        }
        else{
            printf("Caso %d: %d numeros\n", c, t);
            printf("%d", v[0]);
            for(i = 1; i < t; i++){
                printf(" %d", v[i]);
            }
        }
        printf("\n\n");
        c++;
    }
    return 0;
}
