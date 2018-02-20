#include<stdio.h>
#include<stdlib.h>

int main(){
    int h, m, tot;
    while(scanf("%d:%d", &h, &m) != EOF){
        if((h > 7) || (h == 7 && m != 0)){
            h++;
            tot = ((h - 8)*60) + m;
            printf("Atraso maximo: %d\n", tot);
        }
        else{
            printf("Atraso maximo: 0\n");
        }
    }
    return 0;
}
