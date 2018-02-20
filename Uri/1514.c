#include <stdio.h>
#include <stdlib.h>

int anlz_problems(int mat[100][100], int part, int prob);
int anlz_teams(int mat[100][100], int part, int prob);

int main(){
   int part, prob, cr, i, j, mat[100][100];
   while(1){
      scanf("%d %d", &part, &prob);
      if(!(part) && !(prob)) break;
      cr = 0;
      for(i = 0; i < part; ++i){
         for(j = 0; j < prob; ++j){
            scanf("%d", &mat[i][j]);
         }
      }
      //printf("teams = %d\n", anlz_teams(mat, part, prob));
      //printf("probs = %d\n", anlz_problems(mat, part, prob));
      cr += anlz_teams(mat, part, prob) + anlz_problems(mat, part, prob);
      printf("%d\n", cr);
   }
   return 0;
}

int anlz_problems(int mat[100][100], int part, int prob){
   int i, j, cr, sum, flzer, fltod;
   flzer = fltod = 0;
   for(i = 0; i < prob; ++i){
      sum = 0;
      for(j = 0; j < part; ++j){
         sum += mat[j][i];
      }
      //printf("sum = %d, part = %d\n", sum, part);
      if(sum == 0) flzer = 1;
      else if(sum == part) fltod = 1;
      if(flzer+fltod == 2) break;
      //printf("fltod = %d and flzer = %d\n", fltod, flzer);
   }
   cr = 0;
   //printf("flzer = %d and fltod = %d\n", flzer, fltod);
   if(!fltod) cr += 1;
   if(!flzer) cr += 1;
   return cr;
}

int anlz_teams(int mat[100][100], int part, int prob){
   int i, j, cr, sum, flngm, fltod;
   flngm = fltod = 0;
   for(i = 0; i < part; ++i){
      sum = 0;
      for(j = 0; j < prob; ++j){
         sum += mat[i][j];
      }
      if(sum == 0) flngm = 1;
      else if(sum == prob) fltod = 1;
      if(flngm+fltod == 2) break;
   }
   cr = 0;
   if(!fltod) cr += 1;
   if(!flngm) cr += 1;
   return cr;
}
