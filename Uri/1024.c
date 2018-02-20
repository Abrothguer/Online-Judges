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
	int n, i, j, leng;
	char str[1000], aux;
	scanf("%d", &n);
	for(i = 0; i < n; ++i){
		getchar();
		scanf("%[^\n]s", &str);
		leng = strlen(str);
		//printf("orig = %s\n", str);

		for(j = 0; j < leng; ++j){
			if((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z')){
				str[j] += 3;
			}
		}
		//printf("1mod = %s\n", str);

		for(j = 0; j < leng/2; ++j){
			aux = str[leng-j-1];
			str[leng-j-1] = str[j];
			str[j] = aux;
		}
		//printf("2mod = %s\n", str);

		for(j = leng/2; j < leng; ++j){
			str[j] -= 1;
		}
		//printf("3mod = %s\n", str);
		printf("%s\n",str);

		for(j = 0; j < leng; ++j){
			str[j] = '\0';
		}
	}
	return 0;
}