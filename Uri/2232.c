#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int t, n, i;
	long int sum;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		sum = pow(2, n) - 1;
		printf("%ld\n", sum);
	}
	return 0;
}