#include<stdio.h>
#include<string.h>

int main(){
    int n, i;
    char curso[100];
    scanf("%d", &n);
    i = 0;
    while(i < n){
        gets(curso);
        getchar();
        i++;
    }
    printf("Ciencia da Computacao\n");
    return 0;
}
