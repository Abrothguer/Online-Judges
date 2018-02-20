#include<stdio.h>
#include<stdlib.h>

int main(){
    double a, b, c, x, y, z, mab, mbc, mac;
    scanf("%lf %lf %lf", &a, &b, &c);
    mab = (a + b + abs(a - b))/2;
    mbc = (b + c + abs(b - c))/2;
    mac = (a + c + abs(a - c))/2;
    if(mab == a && mbc == b){
        x = a;
        y = b;
        z = c;
    }
    else if(mab == b && mbc == c){
        x = c;
        y = b;
        z = a;
    }
    else if(mac == a && mbc == c){
        x = a;
        y = c;
        z = b;
    }
    else if(mac == c && mbc == b){
        x = b;
        y = c;
        z = a;
    }
    else if(mab == a && mac == c){
        x = c;
        y = a;
        z = b;
    }
    else{
        x = b;
        y = a;
        z = c;
    }
    if (x >= (y + z)){
        printf("NAO FORMA TRIANGULO\n");
    }
    else{
        if((x*x) == ((y*y) + (z*z))){
            printf("TRIANGULO RETANGULO\n");
        }
        else if((x*x) > ((y*y) + (z*z))){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else{
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(x == y && y == z){
            printf("TRIANGULO EQUILATERO\n");
        }
        else if((x == y && y != z) || (y == z && z != x) || (x == z && z != y)){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    return 0;
}
