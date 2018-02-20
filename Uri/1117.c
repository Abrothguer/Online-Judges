#include<stdio.h>
#include<stdlib.h>

int main(){
	int k;
	float n1, s, m;
	s = 0;
	k = 0;
	while (k < 2){
		scanf("%f", &n1);
		if (n1 <  0 || n1 > 10){
			printf("nota invalida\n");
		}
		else if(n1 >= 0 && n1 <= 10){
			s = s + n1;
			k++;
		}
	}
	m = s/2;
	printf("media = %.2f\n", m);
	return 0;
}
