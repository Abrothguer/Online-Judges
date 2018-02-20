#include<stdio.h>

int main(){
	int n, r1, r2, rc, i;
	scanf("%d", &n);
	i = 0;
	while (i<n){
		scanf("%d %d", &r1, &r2);
		rc = r1 + r2;
		printf("%d\n", rc);
		i++;
	}
	return 0;
}
