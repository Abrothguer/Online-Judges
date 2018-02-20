#include<stdio.h>
#include<stdlib.h>

int main(){
    int x, s;
    float a;
    x = 0;
    s = 0;
    while(x < 6){
        scanf("%f", &a);
        if(a > 0){
            s = s +1;
        }
        x++;
    }
    printf("%d valores positivos\n", s);
    return 0;
}
