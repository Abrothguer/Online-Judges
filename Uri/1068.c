#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int cor, i, t, le;
    char expr[1010], stck[1010];
    while(scanf("%s", expr) != EOF){
        le = strlen(expr);
        t = 0;
        cor = 1;
        for(i = 0; i < le; ++i){
            if(expr[i] == '('){
                stck[t++] = '(';
            }
            else if(expr[i] == ')'){
                if(t == 0){
                    cor = 0;
                    break;
                }
                else --t;
                if(stck[t] != '('){
                    cor = 0;
                    break;
                }
            }
        }
        if(t != 0) cor = 0;
        if(cor) printf("correct\n");
        else printf("incorrect\n");
    }
    return 0;
}