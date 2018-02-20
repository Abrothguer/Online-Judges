#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int t, i;
    char sheld[10], raj[10];
    scanf("%d", &t);
    i = 0;
    while(i < t){
        scanf("%s %s", &sheld, &raj);
        if(strcmp(sheld,raj) == 0){
            printf("Caso #%d: De novo!\n", i+1);
        }
        else if(strcmp(sheld,"tesoura") == 0){
            if(strcmp(raj,"papel") == 0 || strcmp(raj,"lagarto") == 0){
               printf("Caso #%d: Bazinga!\n", i+1);
            }
            else if(strcmp(raj,"pedra") == 0 || strcmp(raj,"Spock") == 0){
               printf("Caso #%d: Raj trapaceou!\n", i+1);
            }
        }
        else if(strcmp(sheld,"pedra") == 0){
            if(strcmp(raj,"tesoura") == 0 || strcmp(raj,"lagarto") == 0){
               printf("Caso #%d: Bazinga!\n", i+1);
            }
            else if(strcmp(raj,"papel") == 0 || strcmp(raj,"Spock") == 0){
               printf("Caso #%d: Raj trapaceou!\n", i+1);
            }
        }
        else if(strcmp(sheld,"papel") == 0){
            if(strcmp(raj,"pedra") == 0 || strcmp(raj,"Spock") == 0){
               printf("Caso #%d: Bazinga!\n", i+1);
            }
            else if(strcmp(raj,"tesoura") == 0 || strcmp(raj,"lagarto") == 0){
               printf("Caso #%d: Raj trapaceou!\n", i+1);
            }
        }
        else if(strcmp(sheld,"lagarto") == 0){
            if(strcmp(raj,"Spock") == 0 || strcmp(raj,"papel") == 0){
               printf("Caso #%d: Bazinga!\n", i+1);
            }
            else if(strcmp(raj,"pedra") == 0 || strcmp(raj,"tesoura") == 0){
               printf("Caso #%d: Raj trapaceou!\n", i+1);
            }
        }
        else if(strcmp(sheld,"Spock") == 0){
            if(strcmp(raj,"tesoura") == 0 || strcmp(raj,"pedra") == 0){
               printf("Caso #%d: Bazinga!\n", i+1);
            }
            else if(strcmp(raj,"papel") == 0 || strcmp(raj,"lagarto") == 0){
               printf("Caso #%d: Raj trapaceou!\n", i+1);
            }
        }
        i++;
    }
    return 0;
}
