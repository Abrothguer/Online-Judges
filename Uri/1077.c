#include <stdio.h>
#include <stdlib.h>

int k;
char pile[310], post[310], pref[310];

void push(char c){
   pile[k++] = c;
   return;
}

int pop(){
   if(k){
      --k;
      return pile[k];
   }
   else return 0;
}

int opcomp(char x, char y){
   if(x == '^'){
      if(y == '^') return 0;
      else return 1;
   }
   else if(x == '*' || x == '/'){
      if(y == '^' || y == '*' || y == '/') return 0;
      else return 1;
   }
   else if(x == '+' || x == '-'){
      if(y=='^'||y=='*'||y=='/'||y=='+'||y=='-') return 0;
      else return 1;
   }
}

void postfix(){
   int i = 0, j = 0, it;
   char x;
   while(pref[i] != '\0'){
      if(pref[i] == '(') push(pref[i]);
      else if(pref[i] == ')'){
         while(1){
            x = pop();
            if(x == '(') break;
            else{
               post[j++] = x;
            }
         }
      }
      else if(pref[i]=='+'||pref[i]=='-'||pref[i]=='*'||pref[i]=='/'||pref[i]=='^'){
         while(1){
            x = pop();
            if(opcomp(pref[i],x)){
               push(x);
               push(pref[i]);
               break;
            }
            else post[j++] = x;
         }
      }
      else{
         post[j++] = pref[i];
      }
      ++i;
   }
   while(1){
      x = pop();
      if(x == 0) break;
      else post[j++] = x;
   }
   post[j]='\0';
}

int main(){
   int t;
   scanf("%d", &t);
   getchar();
   while(t--){
      gets(pref);
      postfix();
      //printf("pile = %s\n", pile);
      printf("%s\n", post);
   }
   return 0;
}
