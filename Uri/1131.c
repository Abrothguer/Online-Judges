#include<stdio.h>
#include<stdlib.h>

int main(){
    int vi, vg, nj, ne, gi, gg, k;
    vi = 0;
    vg = 0;
    nj = 0;
    ne = 0;
    while(1){
        scanf("%d %d", &gi, &gg);
        if(gi == gg){
            ne++;
        }
        else if(gi > gg){
            vi++;
        }
        else if(gg > gi){
            vg++;
        }
        nj++;
        while(1){
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &k);
            if(k == 1){
                break;
            }
            else if(k == 2){
                break;
            }
        }
        if(k == 2){
            break;
        }
    }
    printf("%d grenais\n", nj);
    printf("Inter:%d\n", vi);
    printf("Gremio:%d\n", vg);
    printf("Empates:%d\n", ne);
    if(vg > vi){
        printf("Gremio venceu mais\n");
    }
    else if(vi > vg){
        printf("Inter venceu mais\n");
    }
    else if(vi == vg){
        printf("Nao houve vencedor\n");
    }
    return 0;
}
