#include<stdio.h>
#include<stdlib.h>

int main(){
    char cent[9][4] = {"C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    char deze[9][4] = {"X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    char unid[9][4] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    int i, n, ncent, ndeze, nunid;
    scanf("%d", &n);
    ncent = n/100;
    ndeze = (n%100)/10;
    nunid = (n%100)%10;

    if(ncent > 0){
        printf("%s", cent[ncent-1]);
    }
    if(ndeze > 0){
        printf("%s", deze[ndeze-1]);
    }
    if(nunid > 0){
        printf("%s", unid[nunid-1]);
    }
    printf("\n");
    return 0;
}
