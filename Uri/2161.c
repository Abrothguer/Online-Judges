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
	double root, prc;
	int n;
	root = 3.0;
	scanf("%d", &n);
	prc = 0;
	while(n != 0){
		prc = 1/(6+prc);
		--n;
	}
	root += prc;
	printf("%.10lf\n", root);
	return 0;
}