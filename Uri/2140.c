#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include <limits.h>

int main()
{
	int b100, b50, b20, b10, b5, b2, value, prec, pago, n, resto;
	while(1){
		scanf("%d %d", &prec, &pago);
		if(prec == 0 && pago == 0) break;
		b100 = b50 = b20 = b10 = b5 = b2 = resto = 0;
		value = pago - prec;
		b100 = value/100;
		b50 = (value%100)/50;
		b20 = ((value%100)%50)/20;
		b10 = (((value%100)%50)%20)/10;
		b5 = ((((value%100)%50)%20)%10)/5;
		b2 = (((((value%100)%50)%20)%10)%5)/2;
		resto = (((((value%100)%50)%20)%10)%5)%2;
		n = b100 + b50 + b20 + b10 + b5 + b2;
		if(resto != 0) printf("impossible\n");
		else if(n == 2) printf("possible\n");
		else if(n == 1){
			if(b100 == 1) printf("possible\n");
			else if(b20 == 1) printf("possible\n");
			else if(b10 == 1) printf("possible\n");
			else printf("impossible\n");
		}
		else printf("impossible\n");
	}
	return 0;
}