#include<stdio.h>
#include<stdlib.h>

int main(){
    int l, v, i, lv3, lv2;
    while(scanf("%d", &l) != EOF){
        i = 0;
        while(i < l){
            scanf("%d", &v);
            if(v >= 20){
                lv3++;
            }
            else if(v >= 10 && v < 20){
                lv2++;
            }
            i++;
        }
        if(lv3 >= 1){
            printf("3\n");
        }
        else if(lv2 >= 1){
            printf("2\n");
        }
        else if(lv3 == 0 && lv2 == 0){
            printf("1\n");
        }
        lv2 = 0;
        lv3 = 0;
    }
    return 0;
}
