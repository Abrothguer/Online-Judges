#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	double term1, term2;
	long long unsigned int n;
	scanf("%llu", &n);
	term1 = (n)/(log(n));
	term2 = 1.25506*((n)/(log(n)));
	printf("%.1lf %.1lf\n", term1, term2);
	return 0;
}