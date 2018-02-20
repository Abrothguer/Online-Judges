#include<stdio.h>
#include<string.h>

int main(){
    int s1, s2, s3, i;
    char crow[10];
    i = 0;
    s1 = 0;
    s2 = 0;
    s3 = 0;
    while(i < 3){
        while(1){
            gets(crow);
            if(strcmp(crow,"caw caw") == 0){
                i++;
                break;
            }
            else if(strcmp(crow,"--*") == 0){
                if(i == 0){
                    s1 = s1 + 1;
                }
                else if(i == 1){
                    s2 = s2 + 1;
                }
                else if(i == 2){
                    s3 = s3 + 1;
                }
            }
            else if(strcmp(crow,"*--") == 0){
                if(i == 0){
                    s1 = s1 + 4;
                }
                else if(i == 1){
                    s2 = s2 + 4;
                }
                else if(i == 2){
                    s3 = s3 + 4;
                }
            }
            else if(strcmp(crow,"-*-") == 0){
                if(i == 0){
                    s1 = s1 + 2;
                }
                else if(i == 1){
                    s2 = s2 + 2;
                }
                else if(i == 2){
                    s3 = s3 + 2;
                }
            }
            else if(strcmp(crow,"**-") == 0){
                if(i == 0){
                    s1 = s1 + 6;
                }
                else if(i == 1){
                    s2 = s2 + 6;
                }
                else if(i == 2){
                    s3 = s3 + 6;
                }
            }
            else if(strcmp(crow,"-**") == 0){
                if(i == 0){
                    s1 = s1 + 3;
                }
                else if(i == 1){
                    s2 = s2 + 3;
                }
                else if(i == 2){
                    s3 = s3 + 3;
                }
            }
            else if(strcmp(crow,"*-*") == 0){
                if(i == 0){
                    s1 = s1 + 5;
                }
                else if(i == 1){
                    s2 = s2 + 5;
                }
                else if(i == 2){
                    s3 = s3 + 5;
                }
            }
            else if(strcmp(crow,"***") == 0){
                if(i == 0){
                    s1 = s1 + 7;
                }
                else if(i == 1){
                    s2 = s2 + 7;
                }
                else if(i == 2){
                    s3 = s3 + 7;
                }
            }
        }
    }
    printf("%d\n", s1);
    printf("%d\n", s2);
    printf("%d\n", s3);
    return 0;
}
