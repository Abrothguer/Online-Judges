#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int a, b, c, mab, mbc, mac;
    scanf("%d %d %d", &a, &b, &c);
    mab = (a + b + abs(a - b))/2;
    mbc = (b + c + abs(b - c))/2;
    mac = (a + c + abs(a - c))/2;
    if(mab == a && mbc == b){
        printf("%d\n%d\n%d\n", c, b, a);
    }
    else if(mab == b && mbc == c){
        printf("%d\n%d\n%d\n", a, b, c);
    }
    else if(mac == a && mbc == c){
        printf("%d\n%d\n%d\n", b, c, a);
    }
    else if(mac == c && mbc == b){
        printf("%d\n%d\n%d\n", a, c, b);
    }
    else if(mab == a && mac == c){
        printf("%d\n%d\n%d\n", b, a, c);
    }
    else{
        printf("%d\n%d\n%d\n", c, a, b);
    }
    printf("\n");
    printf("%d\n%d\n%d\n", a, b, c);
    return 0;
}
