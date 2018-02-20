#include <stdio.h>
#include <stdlib.h>

int checksquare(int mat[9][9], int i, int j);

int main(){
    int mat[9][9], i, j, prod, sum, n, inst, win;
    scanf("%d", &n);
    inst = n;
    while(n--){
        win = 1;
        for(i = 0; i < 9; ++i){
            sum = 0;
            prod = 1;
            for(j = 0; j < 9; ++j){
                scanf("%d", &mat[i][j]);
                sum += mat[i][j];
                prod *= mat[i][j];
            }
            //printf("linha %d -> sum = %d e prod = %d\n", i, sum, prod);
            if(sum != 45 || prod != 362880) win = 0;
        }
        if(win){
            for(j = 0; j < 9; ++j){
                sum = 0;
                prod = 1;
                for(i = 0; i < 9; ++i){
                    sum += mat[i][j];
                    prod *= mat[i][j];
                }
                //printf("coluna %d -> sum = %d e prod = %d\n", j, sum, prod);
                if(sum != 45 || prod != 362880){
                    win = 0;
                    break;
                }
            }
        }
        if(win){
            if(win) win = checksquare(mat, 0, 0);
            if(win) win = checksquare(mat, 0, 3);
            if(win) win = checksquare(mat, 0, 6);
            if(win) win = checksquare(mat, 3, 0);
            if(win) win = checksquare(mat, 3, 3);
            if(win) win = checksquare(mat, 3, 6);
            if(win) win = checksquare(mat, 6, 0);
            if(win) win = checksquare(mat, 6, 3);
            if(win) win = checksquare(mat, 6, 6);
        }
        printf("Instancia %d\n", inst-n);
        if(win) printf("SIM\n");
        else printf("NAO\n");
        printf("\n");
    }
    return 0;
}

int checksquare(int mat[9][9], int i, int j){
    int l, k, sum, prod;
    sum = mat[i][j]+mat[i][j+1]+mat[i][j+2]+mat[i+1][j]+mat[i+1][j+1]+mat[i+1][j+2]+mat[i+2][j]+mat[i+2][j+1]+mat[i+2][j+2];
    prod = mat[i][j]*mat[i][j+1]*mat[i][j+2]*mat[i+1][j]*mat[i+1][j+1]*mat[i+1][j+2]*mat[i+2][j]*mat[i+2][j+1]*mat[i+2][j+2];
    if(sum != 45 || prod != 362880) return 0;
    return 1;
}
