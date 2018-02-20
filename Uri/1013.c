#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int a, b, c, mab, mbc, mac;
    scanf("%d %d %d", &a, &b, &c);
    mab = (a + b + abs(a - b))/2;
    mbc = (b + c + abs(b - c))/2;
    mac = (a + c + abs(a - c))/2;
    if ((mab == a && mbc == b) || (mac == a && mbc == c)){
        printf("%d eh o maior\n", a);
    }
    else if ((mab == b && mac == a) || (mbc == b && mac == c)){
        printf("%d eh o maior\n", b);
    }
    else {
        printf("%d eh o maior\n", c);
    }
    return 0;
}
