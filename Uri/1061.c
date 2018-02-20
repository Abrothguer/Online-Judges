#include<stdio.h>
#include<stdlib.h>

int main(){
    int di, hi, mi, si, df, hf, mf, sf, dd, dh, dm, ds, soi, sof, sot;

    scanf("%*s %d", &di);
    scanf("%d %*c %d %*c %d", &hi, &mi, &si);
    scanf("%*s %d", &df);
    scanf("%d %*c %d %*c %d", &hf, &mf, &sf);

    soi = (di*86400) + (hi*3600) + (mi*60) + si;
    sof = (df*86400) + (hf*3600) + (mf*60) + sf;
    sot = sof - soi;

    if(sot >= 60){
        dd = sot/86400;
        dh = (sot%86400)/3600;
        dm = ((sot%86400)%3600)/60;
        ds = ((sot%86400)%3600)%60;
    }

    printf("%d dia(s)\n", dd);
    printf("%d hora(s)\n", dh);
    printf("%d minuto(s)\n", dm);
    printf("%d segundo(s)\n", ds);
}
