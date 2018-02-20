#include<stdio.h>

int main(){
	int n, i, k, j, d, s;
	scanf("%d", &n);
	i = 0;
	while (i < n){
		scanf("%d", &k);
		j = 1;
		s = 0;
		while (j < k){
			if (k%j == 0){
				s = s + j;
			}
			j++;
		}
		if (s == k){
			printf("%d eh perfeito\n", k);
		}
		else{
			printf("%d nao eh perfeito\n", k);
		}
		i++;
	}
	return 0;
}
