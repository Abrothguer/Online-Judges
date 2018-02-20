#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int i;
	char tweet[500];
	scanf("%[^\n]s", tweet);
	i = strlen(tweet);
	//printf("%d\n", i);
	if(i <= 140){
		printf("TWEET\n");
	}
	else{
		printf("MUTE\n");
	}
	return 0;
}