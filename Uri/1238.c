#include <stdio.h>
#include <stdlib.h>

int main()
{
	int t, i, j, aux1, aux2;
	char str1[100], str2[100], strfin[200];

	scanf("%d",&t);
	while(t--){
		getchar();
		scanf("%s %s", str1, str2);

		i = j = aux1 = aux2 = 0;
		while(1){
			if(str1[i] != '\0' && aux1 == 0){
				strfin[j] = str1[i];
				++j;
			}
			else{
				aux1 = 1;
			}

			if(str2[i] != '\0' && aux2 == 0){
				strfin[j] = str2[i];
				++j;
			}
			else{
				aux2 = 1;
			}

			if(aux2 == 1 && aux1 == 1) break;

			++i;
		}
		strfin[j] = '\0';
		printf("%s\n", strfin);
	}

	return 0;
}