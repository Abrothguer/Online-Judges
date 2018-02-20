#include<stdio.h>

int main(){
    int od[5], ev[5], t, i, j, iev, iod;
    i = 0;
    iev = 0;
    iod = 0;
    while(i < 15){
        scanf("%d", &t);
        if(t%2 == 0){
            if(iev == 5){
                j = 0;
                while(j < 5){
                    printf("par[%d] = %d\n", j, ev[j]);
                    ev[j] = 0;
                    j++;
                }
                iev = 0;
            }
            if(iev < 5){
                ev[iev] = t;
                iev++;
            }
        }
        else{
            if(iod == 5){
                j = 0;
                while(j < 5){
                    printf("impar[%d] = %d\n", j, od[j]);
                    od[j] = 0;
                    j++;
                }
                iod = 0;
            }
            if(iod < 5){
                od[iod] = t;
                iod++;
            }
        }
        i++;
    }
    j = 0;
    while(j < iod){
        printf("impar[%d] = %d\n", j, od[j]);
        j++;
    }
    j = 0;
    while(j < iev){
        printf("par[%d] = %d\n", j, ev[j]);
        j++;
    }
    return 0;
}
