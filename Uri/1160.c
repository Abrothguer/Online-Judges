#include<stdio.h>

int main(){
    int t, pa, pb, i, an;
    float ca, cb;
    scanf("%d", &t);
    i = 0;
    while(i < t){
        scanf("%d %d %f %f", &pa, &pb, &ca, &cb);
        an = 0;
        while(pa <= pb){
            pa += pa*(ca/100);
            pb += pb*(cb/100);
            ++an;
            if(an > 100){
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if(an <= 100){
            printf("%d anos.\n", an);
        }
        ++i;
    }
    return 0;
}
