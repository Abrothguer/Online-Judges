#include <stdio.h>
#include <stdlib.h>

int main(){
    int t, x, y, b, r, c;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &x, &y);
        r = 3*x*3*x + y*y;
        b = 2*x*x + 5*y*5*y;
        c = -100*x + y*y*y;
        if(r > b && r > c) printf("Rafael ganhou\n");
        else if(b > r && b > c) printf("Beto ganhou\n");
        else if(c > r && c > b) printf("Carlos ganhou\n");
    }
    return 0;
}