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
	int n, i, j, x, res, jcount, icount;
	scanf("%d", &n);
	int matnum[n+1][n+1];
	char matchr[n][n];
	for(i = 0; i <= n; ++i){
		for(j = 0; j <= n; ++j){
			scanf("%d", &x);
			matnum[i][j] = x;
		}
	}
	icount = 0;
	for(i = 0; i < n; ++i){
		jcount = 0;
		for(j = 0; j < n; ++j){
			res = matnum[i][j] + matnum[i+1][j+1] + matnum[i+1][j] + matnum[i][j+1];
			if(res >= 2){
				matchr[icount][jcount] = 'S';
			}
			else{
				matchr[icount][jcount] = 'U';
			}
			++jcount;
		}
		++icount;
	}

	for(i = 0; i < n; ++i){
		for (j = 0; j < n; ++j){
			printf("%c", matchr[i][j]);
		}
		printf("\n");
	}
	return 0;
}