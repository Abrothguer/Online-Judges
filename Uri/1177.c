#include<stdio.h>
#include<stdlib.h>

int main(){
    int t, n[1000], j, i;
    scanf("%d", &t);
    i = 0;
    while(i < 1000){
        j = 0;
        while(j < t){
            printf("N[%d] = %d\n", i, j);
            j++;
            i++;
            if(i >= 1000){
                break;
            }
        }
    }
    return 0;
}
