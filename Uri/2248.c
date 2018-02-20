#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include <limits.h>

typedef struct{
   int cod, med;
}aluno;

int main(){
  int i, best, n;
  int t=1;
  aluno vet[1000];
  scanf("%d", &n);
  while (n > 0){
      for (i = 0; i < n; i++) scanf("%d %d", &vet[i].cod, &vet[i].med);
      best = 0;
      for (i = 1; i < n; i++)
	     if(vet[i].med > vet[best].med) best = i;
      printf("Turma %d\n", t++);
      for (i = 0; i < n; i++)
	     if (vet[i].med == vet[best].med)
	       printf("%d ", vet[i].cod);
      printf("\n\n");
      scanf("%d", &n);
    }
  return 0;
}
