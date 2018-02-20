#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i;
    long long unsigned int m, n, nres;
    char res[11];
    while(1){
       scanf("%llu %llu", &m, &n);
       if(!m && !n) break;
       nres = m + n;
       snprintf(res, 11, "%llu", nres);
       //printf("strres = %s\n", res);
       for(i = 0; i < 11; ++i){
           if(res[i] == '\0'){
                printf("\n");
                break;
           }
           else if(res[i] != '0') printf("%c", res[i]);
       }
    }
    return 0;
}