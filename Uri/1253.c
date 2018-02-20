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
	int qt, mod, i, leng;
	char text[51];
	scanf("%d",&qt);
	while(qt > 0){
		scanf("%s %d", &text, &mod);
		i = 0;
		while(text[i] != '\0'){
			text[i] -= mod;
			if(text[i] < 'A'){
				text[i] += 26;
			}
			++i;
		}
		printf("%s\n", text);
		--qt;
	}
	return 0;
}