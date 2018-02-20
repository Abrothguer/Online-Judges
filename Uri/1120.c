#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int moveit(char str[1000], int pos);

int main()
{
	int d, i, num, ver;
	char n[1000];
	while(1){
		scanf("%d %s", &d, &n);
		if(d == 0 && strcmp(n, "0") == 0){
			//printf("\n");
			break;
		}
		for(i = 0; i < strlen(n); ++i){
			num = n[i] - '0';
			if(num == d){
				moveit(n, i);
				--i;
			}
		}
		ver = 0;
		for(i = 0; i < strlen(n); ++i){
			if(n[i] == '0' && ver == 0){
				moveit(n, i);
				--i;
			}
			else if(n[i] != '0'){
				ver = 1;
				break;
			}
		}
		if(ver == 0 || strcmp(n,"\0") == 0){
			printf("0\n");
		}
		else{
			printf("%s\n", n);
		}
	}
	return 0;
}

int moveit(char str[1000], int pos){
	int i;
	for(i = pos; i < strlen(str); ++i){
		str[i] = str[i+1];
	}

	str[i] = '\0';
	return 0;
}