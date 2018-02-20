#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int validornot(int wid, int hei);
char arr[100][100];

int main(){
    int i, j, wid, hei, result;
    scanf("%d", &wid);
    scanf("%d", &hei);
    for(i = 0; i < hei; i++){
        scanf("%s", arr[i]);
        getchar();
    }
    result = validornot(wid, hei);
    if(result == 1){
        printf("*\n");
    }
    else{
        printf("!\n");
    }
    return 0;
}

validornot(int wid, int hei){
    int i, j, mov, resultado;
    char comando[] = "jdir";
    mov = 0;
    resultado = 0;
    i = 0;
    j = 0;
    while(mov <= (wid*hei)){
        if(i == hei || j == wid){
            break;
        }
        if(arr[i][j] == '*'){
            resultado = 1;
            break;
        }
        else if(arr[i][j] == '.'){
            if(strcmp(comando,"jdir") == 0){
                j++;
            }
            else if(strcmp(comando,"jesq") == 0){
                j--;
            }
            else if(strcmp(comando,"ibax") == 0){
                i++;
            }
            else if(strcmp(comando,"icim") == 0){
                i--;
            }
        }
        else if(arr[i][j] == '>'){
            strcpy(comando,"jdir");
            j++;
        }
        else if(arr[i][j] == '<'){
            strcpy(comando,"jesq");
            j--;
        }
        else if(arr[i][j] == '^'){
            strcpy(comando,"icim");
            i--;
        }
        else if(arr[i][j] == 'v'){
            strcpy(comando,"ibax");
            i++;
        }
        mov++;
    }
    return resultado;
}
