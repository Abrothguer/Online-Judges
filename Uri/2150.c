#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i, j, vgc, len1, len2;
    char str[2000], vog[2000];
    while(scanf("%s", vog) != EOF){
        getchar();
        scanf("%[^\n]", str);
        getchar();
        vgc = 0;
        len1 = strlen(str);
        len2 = strlen(vog);
        for(i = 0; i < len1; ++i){
            for(j = 0; j < len2; ++j){
                if(str[i] == vog[j]){
                    ++vgc;
                    break;
                }
            }
        }
        printf("%d\n", vgc);
    }
    return 0;
}