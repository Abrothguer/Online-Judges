#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
	char str[51];
	int change, i;
	while(gets(str)){
		change = 1;
		for(i = 0; i < strlen(str); ++i){
			if(str[i] != ' '){
				if(change == 1){
					str[i] = toupper(str[i]);
					change = 0;
				}
				else{
					str[i] = tolower(str[i]);
					change = 1;
				}
			}
		}
		printf("%s\n", str);
	}
	return 0;
}