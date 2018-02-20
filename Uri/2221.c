#include <stdio.h>

int main(){
    int cas, i, nda, ngu, a1, a2, d1, d2, l1, l2, bon;
    scanf("%d", &cas);
    i = 0;
    while(i < cas){
        scanf("%d %d %d %d %d %d %d", &bon, &a1, &d1, &l1, &a2, &d2, &l2);
        nda = (a1+d1)/2;
        ngu = (a2+d2)/2;
        if(l1%2==0){
            nda += bon;
        }         
        if(l2%2==0){
            ngu += bon;
        }
        printf("%d %d\n", nda, ngu);
        if(nda == ngu){
            printf("Empate\n");
        }
        else if (nda > ngu){
            printf("Dabriel\n");
        } 
        else{
            printf("Guarte\n");
        }
        i++;
    }
    return 0;
}
