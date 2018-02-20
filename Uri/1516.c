#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, l, k, li, ci, lf, cf, nl, nc;

    while(1){
        scanf("%d %d", &li, &ci);
        if(!li && !ci){
            //printf("\n");
            break;
        }
        getchar();
        char mat[li][ci];
        for(i = 0; i < li; ++i){
            for(j = 0; j < ci; ++j){
                scanf("%c", &mat[i][j]);
                //printf("i = %d e j = %d e %d", i, j, mat[i][j]);
            }
            getchar();
        }
        scanf("%d %d", &lf, &cf);
        nl = lf/li;
        nc = cf/ci;
        for(i = 0; i < li; ++i){
            for(l = 0; l < nl; ++l){
                for(j = 0; j < ci; ++j){
                    for(k = 0; k < nc; ++k){
                        printf("%c", mat[i][j]);
                    }
                }
                printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}
