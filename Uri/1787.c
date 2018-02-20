#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pontos(int x, int y, int z);

int main(){
    int u, r, i, n, j, pu, pr, pi;

    while(scanf("%d", &n)){
        if(!n) break;
        pu = pr = pi = 0;

        for(j = 0; j < n; ++j){
            scanf("%d %d %d", &u, &r, &i);
            
            pu += pontos(u, r, i);
            pr += pontos(r, u, i);
            pi += pontos(i, r, u);
        }

        //printf("pu = %d pi = %d pr = %d\n", pu, pi, pr);

        if(pu > pi && pu > pr) printf("Uilton\n");
        else if(pi > pr && pi > pu) printf("Ingred\n");
        else if(pr > pi && pr > pu) printf("Rita\n");
        else printf("URI\n");
    }
    return 0;
}

int pontos(int x, int y, int z){
    int px, fg, xm;
    px = fg = 0;
    xm = x;
    while(1){
        if(xm%2 != 0 && xm != 1){
            break;
        }
        else if(xm == 1){
            ++px;
            if(x > y && x > z) ++px;
            break;
        }
        else if(xm%2 == 0){
            xm /= 2;
        }
    }
    return px;
}
