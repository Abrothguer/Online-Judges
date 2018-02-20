#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int t, i, sone, stwo, stre;
  char str[10], nums[3][5] = {"one","two","three"};
  scanf("%d",&t);
  getchar();
  while(t--){
    gets(str);
    sone = stwo = stre = 0;
    if(strlen(str) == 3){
      for(i = 0; i < 3; ++i){
        if(str[i] == nums[0][i]){
          ++sone;
        }
        if(str[i] == nums[1][i]){
          ++stwo;
        }
      }
      if(sone >= 2){
        printf("1\n");
      }
      else if(stwo >= 2){
        printf("2\n");
      }
    }
    else if(strlen(str) == 5){
      for(i = 0; i < 5; ++i){
        if(str[i] == nums[2][i]){
          ++stre;
        }
      }
      if(stre >= 4){
        printf("3\n");
      }
    }
  }
  return 0;
}
