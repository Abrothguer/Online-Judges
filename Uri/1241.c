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
	int n, leng1, leng2, pos, i, enc;
	char str1[1001], str2[1001];

	scanf("%d",&n);
	getchar();
	while(n--){
		scanf("%s %s", &str1, &str2);
		getchar();
		leng1 = strlen(str1);
		leng2 = strlen(str2);
		if(leng2 > leng1){
			printf("nao encaixa\n");
		}
		else{
			enc = 1;
			pos = leng1 - leng2;
			for(i = 0; i < leng2; ++i){
				if(str1[pos] != str2[i]){
					enc = 0;
					break;
				}
				++pos;
			}
			if(enc){
				printf("encaixa\n");
			}
			else{
				printf("nao encaixa\n");
			}
		}
	}
	return 0;
}