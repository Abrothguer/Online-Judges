#include <stdio.h>
#include <stdlib.h>

int main(){
    int g1, g2, g11, g22, n, flag, s1, s2;
    scanf("%d", &n);
    while(n--){
        scanf("%d x %d", &g1, &g2);
        scanf("%d x %d", &g22, &g11);
        flag = s1 = s2 = 0;
        if(g1 > g2){
            s1 += 3;
        }
        else if(g2 > g1){
            s2 += 3;
        }
        else{
            ++s1;
            ++s2;
        }
        if(g11 > g22){
            s1 += 3;
        }
        else if(g22 > g11){
            s2 += 3;
        }
        else{
            ++s1;
            ++s2;
        }
        if(s1 > s2) flag = 1;
        else if(s2 > s1) flag = 2;
        else{
            if(g1+g11 > g2+g22) flag = 1;
            else if(g2+g22 > g1+g11) flag = 2;
            else{
                if(g2 > g11) flag = 2;
                else if(g11 > g2) flag = 1;
            }
        }

        if(flag == 1){
            printf("Time 1\n");
        }
        else if(flag == 2){
            printf("Time 2\n");
        }
        else{
            printf("Penaltis\n");
        }
    }
    return 0;
}
