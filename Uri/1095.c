#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, j;
    i = 1;
    j = 60;
    printf("I=%d J=%d\n", i, j);
    while(1){
        if(j == 0){
            break;
        }
        else{
            j = j - 5;
            i = i + 3;
            printf("I=%d J=%d\n", i, j);
        }
    }
    return 0;
}
