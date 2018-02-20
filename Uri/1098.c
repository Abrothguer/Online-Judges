#include<stdio.h>
#include<stdlib.h>

int main(){
    float j, i;
    int k;
    i = 0.0;
    j = 1.0;
    k = 1;
    printf("I=%.0f J=%.0f\n", i, j);
    printf("I=%.0f J=%.0f\n", i, j+1);
    printf("I=%.0f J=%.0f\n", i, j+2);
    j = 1.0;
    i = i + 0.2;
    while(k <= 30){
        if(k%3 == 1){
            j = j + 0.2;
            if(i == 1 || i >= 2){
                printf("I=%.0f J=%.0f\n", i, j);
            }
            else{
                printf("I=%.1f J=%.1f\n", i, j);
            }
        }
        else if(k%3 == 2){
            j = j + 1;
            if(i == 1 || i >= 2){
                printf("I=%.0f J=%.0f\n", i, j);
            }
            else{
                printf("I=%.1f J=%.1f\n", i, j);
            }
        }
        else if(k%3 == 0){
            j = j + 1;
            if(i == 1 || i >= 2){
                printf("I=%.0f J=%.0f\n", i, j);
            }
            else{
                printf("I=%.1f J=%.1f\n", i, j);
            }

            j = j - 2;
            i = i + 0.2;
        }
        k++;
    }
    return 0;
}
