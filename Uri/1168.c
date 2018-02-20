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
	int n, i, leds;
	char str[1000];
	scanf("%d", &n);
	while(n > 0){
		scanf("%s", &str);
		i = 0;
		leds = 0;
		while(str[i] != '\0'){
			if(str[i] == '1'){
				leds += 2;
			}
			else if(str[i] == '7'){
				leds += 3;
			}
			else if(str[i] == '4'){
				leds += 4;
			}
			else if(str[i] == '2' || str[i] == '5' || str[i] == '3'){
				leds += 5;
			}
			else if(str[i] == '6' || str[i] == '9' || str[i] == '0'){
				leds += 6;
			}
			else if(str[i] == '8'){
				leds += 7;
			}
			++i;
		}
		printf("%d leds\n", leds);
		--n;
	}
	return 0;
}