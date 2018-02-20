#include<stdio.h>

int main(){
	int n, i, v[10];
	scanf("%d", &n);
	i = 0;
	while (i< 10){
		printf("N[%d] = %d\n", i, n);
		n = n*2;
		i++;
	}
	return 0;
}
