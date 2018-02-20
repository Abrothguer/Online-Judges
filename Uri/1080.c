#include<stdio.h>
#include<stdlib.h>

int main(){
    int v[100], i, j, pmax, nmax;
    i = 0;
    while(i < 100){
        scanf("%d", &v[i]);
        i++;
    }
    nmax = 0;
    pmax = 0;
    for(i = 0; i < 100; i++){
        for(j = 0; j < 100; j++){
            if(v[j] > nmax){
                pmax = j + 1;
                nmax = v[j];
            }
        }
    }
    printf("%d\n", nmax);
    printf("%d\n", pmax);
    return 0;
}
