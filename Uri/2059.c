#include<stdio.h>
#include<stdlib.h>

int main(){
    int p, j1, j2, r, a, venc, res;
    venc = 0;
    scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);
    if(r == 1 && a == 1){
        venc = 2;
    }
    else if(r == 1 && a == 0){
        venc = 1;
    }
    else if(r == 0 && a == 1){
        venc = 1;
    }
    else{
        res = j1+j2;
        if(res%2 != 0 || res == 1){
            if(p == 1){
                venc = 2;
            }
            else{
                venc = 1;
            }
        }
        else{
            if(p == 1){
                venc = 1;
            }
            else{
                venc = 2;
            }
        }
    }
    printf("Jogador %d ganha!\n", venc);
    return 0;
}
