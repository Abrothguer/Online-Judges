#include<stdio.h>
#include<stdlib.h>

int main(){
    int sc, ss, sr, x, n, i, st;
    float ps, pr, pc, fss, fsr, fsc;
    char am;
    scanf("%d", &n);
    i = 0;
    sc = 0;
    ss = 0;
    sr = 0;
    st = 0;
    while(i < n){
        scanf("%d %c", &x, &am);
        if(am == 'S'){
            ss += x;
            st += x;
        }
        else if(am == 'C'){
            sc += x;
            st += x;
        }
        else if(am == 'R'){
            sr += x;
            st += x;
        }
        i++;
    }
    fss = (float)ss;
    fsr = (float)sr;
    fsc = (float)sc;
    ps = (100*fss)/st;
    pr = (100*fsr)/st;
    pc = (100*fsc)/st;
    printf("Total: %d cobaias\n", st);
    printf("Total de coelhos: %d\n", sc);
    printf("Total de ratos: %d\n", sr);
    printf("Total de sapos: %d\n", ss);
    printf("Percentual de coelhos: %.2f %%\n", pc);
    printf("Percentual de ratos: %.2f %%\n", pr);
    printf("Percentual de sapos: %.2f %%\n", ps);
    return 0;
}
