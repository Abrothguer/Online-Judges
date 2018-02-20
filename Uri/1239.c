#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include <limits.h>

int main()
{
	int oni, onb, i;
	char str[100];
	while(gets(str) != NULL){
		i = onb = oni = 0;
		while(str[i] != '\0'){
			if(str[i] == '_' && oni == 0){
				printf("<i>");
				oni = 1;
			}
			else if(str[i] == '_' && oni == 1){
				printf("</i>");
				oni = 0;
			}
			else if(str[i] == '*' && onb == 0){
				printf("<b>");
				onb = 1;
			}
			else if(str[i] == '*' && onb == 1){
				printf("</b>");
				onb = 0;
			}
			else{
				printf("%c", str[i]);
			}
			++i;
		}
		printf("\n");
	}
	return 0;
}