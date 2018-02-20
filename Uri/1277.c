#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double calcfreq(char str[300]);

int main(){
  int i, t, n, bol[100], prtd;
  double freq;
  char strs[100][101], str[300];
  scanf("%d", &t);
  while(t--){
    scanf("%d", &n);
    getchar();
    for(i = 0; i < n; ++i){
      scanf("%s", strs[i]);
      getchar();
    }
    memset(bol, 0, sizeof(int)*100);
    prtd = 0;
    for(i = 0; i < n; ++i){
      scanf("%s", str);
      getchar();
      freq = calcfreq(str);
      if(freq < 75){
        if(prtd){
          printf(" ");
        }
        printf("%s", strs[i]);
        ++prtd;
      }
    }
    printf("\n");
  }
}

double calcfreq(char str[300]){
  int i, total, aus, prs;
  double freq;
  i = total = aus = prs = 0;
  while(str[i] != '\0'){
    ++total;
    if(str[i] == 'P'){
      ++prs;
    }
    else if(str[i] == 'M'){
      --total;
    }
    ++i;
  }
  freq = (double) prs*100/total;
  return freq;
}
