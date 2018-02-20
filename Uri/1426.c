#include <stdio.h>
#include <stdlib.h>

int main(){
    int mat[9][9], i, j, n;
    scanf("%d", &n);
    while(n--){
        for(i = 0; i <= 8; i += 2){
            for(j = 0; j <= i; j += 2){
                scanf("%d", &mat[i][j]);
            }
        }
        for(j = 0; j <= 6; j+= 2){
            mat[8][j+1] = (mat[6][j] - mat[8][j] - mat[8][j+2])/2;
        }
        for(i = 7; i >= 0; --i){
            for(j = 0; j <= i; ++j){
                if(i%2 != 0 || j%2 != 0){
                    mat[i][j] = mat[i+1][j] + mat[i+1][j+1];
                }
            }
        }
        for(i = 0; i < 9; ++i){
            for(j = 0; j <= i; ++j){
                if(j == i) printf("%d", mat[i][j]);
                else printf("%d ", mat[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}