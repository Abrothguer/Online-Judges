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
	int test, per, i, flag;
	scanf("%d", &test);
	while(test--){
		scanf("%d", &per);
		char matlang[per][51];
		fflush(stdin);
		for(i = 0; i < per; ++i){
			scanf("%s", &matlang[i]);
		}
		flag = 0;
		for(i = 0; i < per-1; ++i){
			if(strcmp(matlang[i],matlang[i+1]) != 0){
				flag = 1;
				break;
			}
		}
		if(flag == 1){
			printf("ingles\n");
		}
		else{
			printf("%s\n", matlang[0]);
		}
	}
	return 0;
}