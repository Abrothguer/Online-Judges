#include<stdio.h>
#include<stdlib.h>

int main(){
    int j, i, k;
    i = 1;
    j = 7;
    k = 1;
    while(k <= 15){
        if (k%3 == 1 || k == 1){
            j = 7;
            printf("I=%d J=%d\n", i, j);
        }
        else if(k%3 == 2 || k == 2){
            j = 6;
            printf("I=%d J=%d\n", i, j);
        }
        else if(k%3 == 0){
            j = 5;
            printf("I=%d J=%d\n", i, j);
            i = i + 2;
        }
        k++;
    }
    return 0;
}
