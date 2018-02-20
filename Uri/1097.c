#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, j, k;
    i = 1;
    j = 7;
    k = 1;
    while(k <= 15){
        if(k == 1){
            printf("I=%d J=%d\n", i, j);
        }
        else if(k%3 == 1){
            j = j + 4;
            printf("I=%d J=%d\n", i, j);
        }
        else if(k%3 == 2 || k == 2){
            j = j - 1;
            printf("I=%d J=%d\n", i, j);
        }
        else if(k%3 == 0){
            j = j - 1;
            printf("I=%d J=%d\n", i, j);
            i = i + 2;
        }
        k++;
    }
    return 0;
}
