#include<stdio.h>
#include<stdio.h>

int main(){
	int n, a;
	while (1){
		scanf("%d", &n);
		if (n == 0){
			break;
		}
		else{
			a = 1;
			printf("%d", a);
			a++;
			while (a <= n){
				printf(" %d", a);
				a++;
			}
			printf("\n");
		}
	}
	return 0;
}
