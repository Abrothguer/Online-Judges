#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int c, n, i;
    char per[30];
    scanf("%d", &c);
    i = 0;
    while(i < c){
        scanf("%s %d", &per, &n);
        if(strcmp(per,"Thor") == 0){
            printf("Y\n");
        }
        else{
            printf("N\n");
        }
        i++;
    }
    return 0;
}
