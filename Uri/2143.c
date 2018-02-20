#include<stdio.h>

int main(){
    int cas, i, x, res;
    while(1){
        scanf("%d", &cas);
        if(cas == 0){
            break;
        }
        else{
            i = 0;
            while(i < cas){
                scanf("%d", &x);
                if(x%2 != 0){
                    res = (2*x)-1;
                    printf("%d\n", res);
                }
                else{
                    res = (2*x)-2;
                    printf("%d\n", res);
                }
                i++;
            }
        }
    }
    return 0;
}
