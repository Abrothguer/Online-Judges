#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char nome[500];
	int t;
	scanf("%[^\n]s", nome);
	t = strlen(nome);
	if(t <= 80){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}