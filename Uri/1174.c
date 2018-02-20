#include<stdio.h>

int main(){
	int i;
	float x, v[100];
	i = 0;
	while (i < 100){
		scanf("%f", &x);
		v[i] = x;
		i++;
	}
	i = 0;
	while (i < 100){
		if (v[i] <= 10){
			printf("A[%d] = %.1f\n", i, v[i]);
		}
		i++;
	}
	return 0;
}
