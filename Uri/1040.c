#include<stdio.h>

int main(){
    float n1, n2, n3, n4, av, ne, ar;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    av = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
    printf("Media: %.1f\n",av);
    if (av >= 7){
        printf("Aluno aprovado.\n");
    }
    else if(av < 5){
        printf("Aluno reprovado.\n");
    }
    else{
        printf("Aluno em exame.\n");
        scanf("%f", &ne);
        printf("Nota do exame: ");
        ar = (ne + av)/2;
        if(ar >= 5){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", ar);
    }
    return 0;
}
