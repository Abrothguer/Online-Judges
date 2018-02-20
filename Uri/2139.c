#include <stdio.h>
#include <stdlib.h>

int main(){
	int dia, mes, difm;
	while(scanf("%d %d", &mes, &dia) != EOF){
		if(mes == 12 && dia == 25){
			printf("E natal!\n");
		}
		else if (mes == 12 && dia == 24){
			printf("E vespera de natal!\n");
		}
		else if (mes==12 && dia > 25){
			printf("Ja passou!\n");
		}
		else{
			switch (mes){
				case 12 : difm = 25 - dia;
				break;
				case 11 : difm = 25 + 30 - dia;
				break;
				case 10 : difm = 25 + 30 + 31 - dia;
				break;
				case 9 : difm = 25 + 30 + 31 + 30 - dia;
				break;
				case 8 : difm = 25 + 30 + 31 + 30 + 31 - dia;
				break;
				case 7 : difm = 25 + 30 + 31 + 30 + 31 + 31 - dia;
				break;
				case 6 : difm = 25 + 30 + 31 + 30 + 31 + 31 + 30 - dia;
				break;
				case 5 : difm = 25 + 30 + 31 + 30 + 31 + 31 + 30 + 31 - dia;
				break;
				case 4 : difm = 25 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 - dia;
				break;
				case 3 : difm = 25 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31 - dia;
				break;
				case 2 : difm = 25 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31 + 29 - dia;
				break;
				case 1 : difm = 25 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31 + 29 + 31 - dia;
				break;
			}
			printf("Faltam %d dias para o natal!\n", difm);
		}
	}
	return 0;
}