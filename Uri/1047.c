#include<stdio.h>
#include<stdlib.h>

int main(){
    int hi, mi, hf, mf, hd, md;
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    if(mf > mi){
        md = mf - mi;
        if(hf > hi){
            hd = hf - hi;
        }
        else{
            hd = 24 - hi + hf;
        }
    }
    else if(mi > mf){
        md = 60 + (mf - mi);
        if(hf > hi){
            hd = hf - hi - 1;
        }
        else{
            hd = (24 - hi + hf) - 1;
        }
    }
    else{
        md = 0;
        if(hf > hi){
            hd = hf - hi;
        }
        else{
            hd = 24 - hi + hf;
        }
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hd, md);
    return 0;
}
