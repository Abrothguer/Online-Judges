#include<stdio.h>
#include<stdlib.h>

int main(){
	int t, p, i, k = 1;
	scanf("%d %d", &t, &p);
	int v[100];
	i = 0;
	while (i < p){
		scanf("%d", &v[i]);
		i++;
	}
	i = 0;
	while (i < p-1){
		if (abs(v[i] - v[i+1]) > t){
			k = 0;
		}
		i++;
	}
	if (k == 0){
		printf("GAME OVER\n");
	}
	else{
		printf("YOU WIN\n");
	}
	return 0;
}
