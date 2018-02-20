#include <stdio.h>
#include <stdlib.h>

int calcula(char str[11], int res[100]);

int main(){
   int res[100], n, t, i, ans;
   char str[11];
   scanf("%d", &t);
   while(t--){
      scanf("%d", &n);
      getchar();
      ans = 0;
      for(i = 0; i < n; ++i){
         gets(str);
         res[i] = calcula(str, res);
         ans += res[i];
      }
      printf("%d\n", ans);
   }
   return 0;
}

int calcula(char str[11], int res[100]){
   int j;
   if(str[0] == 'L'){
      return -1;
   }
   else if(str[0] == 'R'){
      return 1;
   }
   else{
      if(str[9] == '\0'){
         j = str[8]-'0';
         return res[j-1];
      }
      else{
         j = (str[8]-'0')*10 + (str[9]-'0');
         return res[j-1];
      }
   }
}
