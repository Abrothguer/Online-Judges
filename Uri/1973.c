#include<stdio.h>
#include<stdlib.h>

int main(){
    long long int n, stot, sove, srob, acp, i;
    scanf("%lld", &n);
    long long int v[n], test[n];
    i = 0;
    stot = 0;
    while(i < n){
        scanf("%lld", &v[i]);
        stot += v[i];
        i++;
    }
    i = 0;
    while(i < n){
        test[i] = 0;
        i++;
    }
    i = 0;
    srob = 0;
    acp = 1;
    while(1){
        if(i == -1 || i == n){
            break;
        }
        if(test[i] != i){
            test[i] = i;
            acp++;
        }
        if(v[i]%2 == 0){
            i = i - 1;
            if(v[i+1] != 0){
                v[i+1] = v[i+1] - 1;
                srob++;
            }
        }
        else{
            i = i + 1;
            v[i-1] = v[i-1] - 1;
            srob++;
        }
    }
    sove = stot - srob;
    printf("%lld %lld\n", acp, sove);
    return 0;
}
