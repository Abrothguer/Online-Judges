#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int t, i;
	double tam;
	char v[10000];
	scanf("%d", &t);
	i = 0;
	while (i < t){
		scanf("%s", v);
    	tam = strlen(v) * 0.01;
    	printf("%.2lf\n", tam);
    	i++;
	}
	return 0;
}