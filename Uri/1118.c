#include<stdio.h>
#include<stdlib.h>

int main(){
	int k, t;
	float n, m, s;
	while (1){
		k = 0;
		s = 0;
		while (k < 2){
			scanf("%f", &n);
			if (n < 0 || n > 10){
				printf("nota invalida\n");
			}
			else if (n >= 0 && n <= 10){
				s = s + n;
				k++;
			}
		}
		m = s/2;
		printf("media = %.2f\n", m);
		while (1){
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &t);
			if (t == 2){
				break;
			}
			else if (t == 1){
				break;
			}
		}
		if (t == 2){
			break;
		}
	}
	return 0;
}
