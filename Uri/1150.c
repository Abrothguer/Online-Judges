#include<stdio.h>
#include<stdlib.h>

int main(){
    int x, z, s, i;
    scanf("%d", &x);
    while(1){
        scanf("%d", &z);
        if(z > x){
            break;
        }
    }
    s = 0;
    i = 1;
    while(1){
        s = s + x;
        if(s > z){
            break;
        }
        else{
            i++;
        }
        x++;
    }
    printf("%d\n", i);
    return 0;
}
