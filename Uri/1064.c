#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, p;
    float a, s, m;
    i = 0;
    s = 0;
    p = 0;
    while(i < 6){
        scanf("%f", &a);
        if(a > 0){
            p++;
            s = s + a;
        }
        i++;
    }
    m = s/p;
    printf("%d valores positivos\n", p);
    printf("%.1f\n", m);
    return 0;
}
