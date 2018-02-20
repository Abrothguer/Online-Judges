#include <stdio.h>
#include <stdlib.h>

char mat[15][50] = {
{" ____________________________________________"},
{"|                                            |"},
{"|    ____________________________________    |_"},
{"|   |                                    |   |_)"},
{"|   |   8         4         2         1  |   |"},
{"|   |                                    |   |"},
{"|   |                                    |   |"},
{"|   |                                    |   |"},
{"|   |                                    |   |"},
{"|   |                                    |   |"},
{"|   |                                    |   |"},
{"|   |   32    16    8     4     2     1  |   |_"},
{"|   |____________________________________|   |_)"},
{"|                                            |"},
{"|____________________________________________|"}
};

int main(){
   int i, h, m, mask;
   int hpos[6] = {0}, mpos[6] = {0};
   while(scanf("%d%*c%d", &h, &m) != EOF){
      i = 0;
      for(mask = 1; mask <= 32; mask = mask << 1){
         if(mask&h){
            mat[6][abs(i-3)*10+8] = 'o';
            hpos[i] = 1;
         }
         if(mask&m){
            mat[9][abs(i-5)*6+8] = 'o';
            mpos[i] = 1;
         }
         ++i;
      }
      for(i = 0; i < 15; ++i){
         printf("%s\n", mat[i]);
      }
      for(i = 0; i < 6; ++i){
         if(hpos[i]) mat[6][abs(i-3)*10+8] = ' ', hpos[i] = 0;
         if(mpos[i]) mat[9][abs(i-5)*6+8] = ' ', mpos[i] = 0;
      }
      printf("\n");
   }
   return 0;
}