#include<stdio.h>
#include<stdlib.h>

int main(){
    float s, i;
    scanf("%f", &s);
    if(s <= 2000.00){
        printf("Isento\n");
    }
    else if(s >= 2000.01 && s <= 3000.00){
        i = (s - 2000.00)*0.08;
        printf("R$ %.2f\n", i);
    }
    else if(s >= 3000.01 && s <= 4500.00){
        i = (1000*0.08) + ((s - 3000)*0.18);
        printf("R$ %.2f\n", i);
    }
    else if(s >= 4500.01){
        i = (1000*0.08) + (1500*0.18) + ((s - 4500)*0.28);
        printf("R$ %.2f\n", i);
    }
}
