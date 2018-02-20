#include<stdio.h>

int main(){
    int n, s, i;
    while(1){
        scanf("%d", &n);
        if(n == 0){
            break;
        }
        else{
            if(n%2 != 0){
                n = n + 1;
            }
            i = 0;
            s = 0;
            while(i < 5){
                s = s + n;
                n = n + 2;
                i++;
            }
            printf("%d\n", s);
        }
    }
    return 0;
}
