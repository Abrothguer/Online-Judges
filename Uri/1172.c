#include<stdio.h>

int main(){
	int n, i, v[9];
	i = 0;
	while(i < 10){
		scanf("%d", &n);
		v[i] = n;
		if(v[i] <= 0){
			v[i] = 1;
		}
		i++;
	}
	i = 0;
	while(i < 10){
		printf("X[%d] = %d\n", i, v[i]);
		i++;
	}
	return 0;
}
