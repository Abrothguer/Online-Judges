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
	int i, j, leng1, leng2, size, sfin, k, l;
	char str1[100], str2[100];
	while(gets(str1)){
		gets(str2);

		leng1 = strlen(str1);
		leng2 = strlen(str2);
		size = sfin = 0;

		for(i = 0; i < leng1; ++i){

			for(j = 0; j < leng2; ++j){
				l = i;
				if(str1[i] == str2[j]){
					for(k = j; k < leng2; ++k){
						if(str1[l] == str2[k]){
							++size;
							++l;
						}
						else{
							break;
						}
					}
				}
				if(size > sfin){
					sfin = size;
					size = 0;
				}
				else if(size){
					size = 0;
				}
			}
		}

		printf("%d\n", sfin);
	}
	return 0;
}