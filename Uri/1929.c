#include<stdio.h>

int main(){
    int a, b, c, d, aux, i;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    i = 0;
    while(i < 4){
        if(i == 0){
            if(a < b+c && b < a+c && c < a+b){
                printf("S\n");
                break;
            }
        }
        if(i == 1){
            if(d < b+c && b < d+c && c < d+b){
                printf("S\n");
                break;
            }
        }
        if(i == 2){
            if(a < d+c && d < a+c && c < a+d){
                printf("S\n");
                break;
            }
        }
        if(i == 3){
            if(a < b+d && b < a+d && d < a+b){
                printf("S\n");
                break;
            }
            else{
                printf("N\n");
            }
        }
        i++;
    }
    return 0;
}
