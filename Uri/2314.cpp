#include <bits/stdc++.h>

using namespace std;

void printcode(char lin[2000]);

int main(){
   char lin[2000];
   //ios::sync_with_stdio(false);
   while(gets(lin)){
      //printf("%s", line);
      if(lin[0] == '#') cout << lin << '\n';
      else printcode(lin);
   }
   return 0;
}

void printcode(char lin[2000]){
   int nl, par, i, j, ntb;
   char tab[5] = "....";
   tab[4] = '\0';
   //ios::sync_with_stdio(false);
   i = nl = par = ntb = 0;

   while(lin[i] != '\0'){
      if(lin[i] == '(') ++par;
      else if(lin[i] == ')') --par;

      if(lin[i] == '{'){
         cout << '\n';
         for(j = 0; j < ntb; ++j) cout << tab;
         cout << lin[i] << '\n';
         ++ntb;
         nl = 1;
      }
      else if(lin[i] == '}'){
         --ntb;
         for(j = 0; j < ntb; ++j) cout << tab;
         cout << '}' << '\n';
         nl = 1;
      }
      else if(lin[i] == ';' && !par){
         cout << lin[i] << '\n';
         nl = 1;
      }
      else{
         if(nl){
            for(j = 0; j < ntb; ++j) cout << tab;
            nl = 0;
         }
         cout << lin[i];
      }

      ++i;
   }

   return;
}
