#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, o, e, p, n, a;
    i = 0;
    o = 0;
    e = 0;
    p = 0;
    n = 0;
    while(i < 5){
        scanf("%d", &a);
        if(a > 0){
            p++;
        }
        else if(a < 0){
            n++;
        }

        if(a%2 == 0){
            e++;
        }
        else{
            o++;
        }
        i++;
    }
    printf("%d valor(es) par(es)\n", e);
    printf("%d valor(es) impar(es)\n", o);
    printf("%d valor(es) positivo(s)\n", p);
    printf("%d valor(es) negativo(s)\n", n);
    return 0;
}
