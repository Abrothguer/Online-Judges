#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j, n, m, posc, posl;
	scanf("%d %d", &n, &m);
	int v[1000][1000];
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d", &v[i][j]);
		}
	}
	posl = 0;
	posc = 0;
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			if (v[i][j] == 42 && i != 0 && j != 0 && i != n-1 && j != m-1){
				if (v[i][j+1] == 7 && v[i][j-1] == 7 && v[i+1][j] == 7 && v[i-1][j] == 7 && v[i-1][j-1] == 7 && v[i+1][j+1] == 7 && v[i+1][j-1] == 7 && v[i-1][j+1] == 7){
					posl = i + 1;
					posc = j + 1;
				}
			}
		}
	}
	printf("%d %d\n", posl, posc);
	return 0;
}