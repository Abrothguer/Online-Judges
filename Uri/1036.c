#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float a, b, c, d, x1, x2;
    scanf("%f %f %f", &a, &b, &c);
    if(a == 0){
        printf("Impossivel calcular\n");
    }
    else{
        d = (b*b)-(4*a*c);
        if(d < 0){
            printf("Impossivel calcular\n");
        }
        else{
            x1 = (-b + (sqrt(d)))/(2*a);
            x2 = (-b - (sqrt(d)))/(2*a);
            printf("R1 = %.5f\n", x1);
            printf("R2 = %.5f\n", x2);
        }
    }
    return 0;
}
