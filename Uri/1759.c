#include<stdio.h>

int main(){
	int n, i;
	scanf("%d", &n);
	i = 0;
	while (i<n){
		if (i == 0){
			printf("Ho");
		}
		else{
			printf(" Ho");
		}
		i++;
	}
	printf("!\n");
	return 0;
}
