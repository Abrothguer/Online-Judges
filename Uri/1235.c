#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main()
{
	int t, leng, i, mod, rd;
	char text[200], aux;
	scanf("%d", &t);
	getchar();
	while(t--){
		gets(text);
		leng = strlen(text);
		if(leng%2 == 0) mod = 1;
		else mod = 0;
		rd = (int) round(leng/4.0 - leng/4);
		for(i = 0; i < leng/4 + rd; ++i){
			aux = text[i]; 
			text[i] = text[leng/2 - mod - i];
			text[leng/2 - mod - i] = aux;

			aux = text[leng - 1 -i];
			text[leng - 1 - i] = text[leng/2 + abs(mod - 1) + i];
			text[leng/2 + abs(mod - 1) + i] = aux;
		}
		printf("%s\n", text);
	}
	return 0;
}