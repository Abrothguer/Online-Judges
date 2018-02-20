#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, m, i;
    char act[10];
    scanf("%d %d", &n, &m);
    i = 0;
    while(i < m){
        scanf("%s", act);
        if(strcmp(act,"fechou") == 0){
            n++;
        }
        else if(strcmp(act,"clicou") == 0){
            n--;
        }
        i++;
    }
    printf("%d\n", n);
    return 0;
}
