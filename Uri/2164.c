#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int n;
	double fib, t1, t2;
	scanf("%d", &n);
	t1 = (1+sqrt(5))/2;
	t2 = (1-sqrt(5))/2;
	fib = (pow(t1,n) - pow(t2,n))/(sqrt(5));
	printf("%.1lf\n", fib);
	return 0;
}