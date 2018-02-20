#include<stdio.h>
#include<stdlib.h>

int main(){
    float s, ns, p, r;
    scanf("%f", &s);

    if(s > 0.0 && s <= 400.00){
        p = 15;
        r = ((p/100) * s);
        ns = s + r;
    }
    else if(s >= 400.01 && s <= 800.00){
        p = 12;
        r = ((p/100) * s);
        ns = s + r;
    }
    else if(s >= 800.01 && s <= 1200.00){
        p = 10;
        r = ((p/100) * s);
        ns = s + r;
    }
    else if(s >= 1200.01 && s <= 2000.00){
        p = 7;
        r = ((p/100) * s);
        ns = s + r;
    }
    else if(s > 2000.00){
        p = 4;
        r = ((p/100) * s);
        ns = s + r;
    }
    printf("Novo salario: %.2f\n", ns);
    printf("Reajuste ganho: %.2f\n", r);
    printf("Em percentual: %.0f %%\n", p);
    return 0;
}
