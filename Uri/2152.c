#include <stdio.h>
#include <stdlib.h>

int main(){
	int h, m, i, n, c;
	scanf("%d", &n);
	i = 0;
	while (i < n){
		scanf("%d %d %d", &h, &m, &c);
		if (c == 0){
			printf("%02d:%02d - A porta fechou!\n", h, m);
		}
		else{
			printf("%02d:%02d - A porta abriu!\n", h, m);
		}
		i++;
	}
	return 0;
}