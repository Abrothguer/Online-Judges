#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int a, b, c, resp;
    float l;
    while(1){
        scanf("%d", &a);
        if(a == 0){
            break;
        }
        scanf("%d %d", &b, &c);
        l = a * b * 100.0/c;
        l = sqrt(l);
        resp = (int)l;
        printf("%d\n", resp);
    }
    return 0;
}
