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
	int *vet, i, n, h, res;
	char control;
	scanf("%d",&n);
	vet = (int*) calloc(n,sizeof(int));
	for(i = 0; i < n; ++i){
		scanf("%d", &h);
		vet[i] = h;
	}
	if(vet[0] > vet[1]) control = 'p';
	else if(vet[0] < vet[1]) control = 'v';
	else{
		res = 0;
		printf("%d\n", res);
		return 0;
	}
	res =  1;
	for(i = 1; i < n-1; ++i){
		if(control == 'p'){
			if(vet[i] < vet[i+1]) res = 1;
			else{
				res = 0;
				break;
			}
			control = 'v';
		}
		else{
			if(vet[i] > vet[i+1]) res = 1;
			else{
				res = 0;
				break;
			}
			control = 'p';
		}
	}
	printf("%d\n", res);
	free(vet);
	return 0;
}
