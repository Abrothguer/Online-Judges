#include<stdio.h>

int main(){
    int v[100], n, t, i, j, pmin;
    while(1){
        scanf("%d", &n);
        if(n >= 1 && n <= 100){
            break;
        }
    }
    i = 0;
    while(i < n){
        while(1){
            scanf("%d", &t);
            if(t >= 0 && t <= 20){
                break;
            }
        }
        v[i] = t;
        i++;
    }
    j = 0;
    pmin = 0;
    while(j <= i){
        if(v[pmin] > v[j]){
            pmin = j;
        }
        j++;
    }
    pmin++;
    printf("%d\n", pmin);
    return 0;
}
