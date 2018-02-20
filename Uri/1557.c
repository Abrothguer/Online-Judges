#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int i, j, n, tot, m[15][15];
    while(1){
        while(1){
            scanf("%d", &n);
            if(n >= 0 && n <= 15){
                break;
            }
        }
        if(n == 0){
            break;
        }
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                if(i < n && j < n){
                    tot = pow(2,(i+j));
                    m[i][j] = tot;
                }
                else{
                    m[i][j] = 0;
                }
            }
        }
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                if(m[n-1][n-1] < 10 && m[n-1][n-1] > 0){
                    if(j == 0){
                        printf("%1d", m[i][j]);
                    }
                    else{
                        printf("% 1d", m[i][j]);
                    }
                }
                else if(m[n-1][n-1] < 100 && m[n-1][n-1] > 10){
                    if(j == 0){
                        printf("%2d", m[i][j]);
                    }
                    else{
                        printf("% 2d", m[i][j]);
                    }
                }
                else if(m[n-1][n-1] < 1000 && m[n-1][n-1] > 100){
                    if(j == 0){
                        printf("%3d", m[i][j]);
                    }
                    else{
                        printf("% 3d", m[i][j]);
                    }
                }
                else if(m[n-1][n-1] < 10000 && m[n-1][n-1] > 1000){
                    if(j == 0){
                        printf("%4d", m[i][j]);
                    }
                    else{
                        printf("% 4d", m[i][j]);
                    }
                }
                else if(m[n-1][n-1] < 100000 && m[n-1][n-1] > 10000){
                    if(j == 0){
                        printf("%5d", m[i][j]);
                    }
                    else{
                        printf("% 5d", m[i][j]);
                    }
                }
                else if(m[n-1][n-1] < 1000000 && m[n-1][n-1] > 100000){
                    if(j == 0){
                        printf("%6d", m[i][j]);
                    }
                    else{
                        printf("% 6d", m[i][j]);
                    }
                }
                else if(m[n-1][n-1] < 10000000 && m[n-1][n-1] > 1000000){
                    if(j == 0){
                        printf("%7d", m[i][j]);
                    }
                    else{
                        printf("% 7d", m[i][j]);
                    }
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
