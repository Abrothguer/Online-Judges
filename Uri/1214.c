#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int c, n, tot, i, ac, vet[1000];
  double med, medac;
  scanf("%d", &c);
  while(c--){
    scanf("%d", &n);
    tot = ac = 0;
    med = medac = 0;
    for(i = 0; i < n; ++i){
      scanf("%d", &vet[i]);
      med += vet[i];
      ++tot;
    }
    med /= tot;
    for(i = 0; i < n; ++i){
      if(vet[i] > med) ++ac;
    }
    medac = ac*100.0/n;
    printf("%.3lf%%\n", medac);
  }
  return 0;
}
