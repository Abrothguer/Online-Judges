#include <stdio.h>
#include <stdlib.h>

int main(){
    int t, cups, l, c;
    scanf("%d", &t);
    cups = 0;
    while(t--){
        scanf("%d %d", &l, &c);
        if(l > c) cups += c;
    }
    printf("%d\n", cups);
    return 0;
}