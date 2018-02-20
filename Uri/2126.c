#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int i, k, j, cas, pos, compn2;
    char n1[10], n2[40];
    cas = 0;
    while(scanf("%s %s", n1, n2) != EOF){
        k = 0;
        compn2 = strlen(n2);


        for(cas++, i = 0; i < compn2; i++){
            if(n2[i] == n1[0]){
                j = 0;
                while(n1[j] == n2[i+j]){
                    ++j;
                    if(n1[j] == '\0'){
                        ++k;
                        pos = i + 1;
                    }
                }
            }
        }
        printf("Caso #%d:\n", cas);
        if(k == 0){
            printf("Nao existe subsequencia\n\n");
        }
        else{
            printf("Qtd.Subsequencias: %d\n", k);
            printf("Pos: %d\n\n", pos);
        }
    }
    return 0;
}
