#include<stdio.h>
#include<string.h>

int main(){
	int c, i;
	long int m, n, s;
	char nam1[100], op1[10], nam2[100], op2[10];
	scanf("%d", &c);
	i = 0;
	while (i < c){
		scanf("%s %s %s %s", &nam1, &op1, &nam2, &op2);
		scanf("%d %d", &m, &n);
		s = m + n;
		if (s%2 == 0){
			if (strcmp(op1,"PAR") == 0){
				printf("%s\n", nam1);
			}
			else{
				printf("%s\n", nam2);
			}
		}
		else{
			if (strcmp(op1,"IMPAR") == 0){
				printf("%s\n", nam1);
			}
			else{
				printf("%s\n", nam2);
			}
		}
		i++;
	}
	return 0;
}
