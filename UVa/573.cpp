#include <bits/stdc++.h>

using namespace std;

int main(){
    int i;
    double d, h, u, f, cont, ls;
    while(scanf("%lf %lf %lf %lf", &h, &d, &u, &f), d){
        i = 1;
        ls = (f/100.0) * d;
        cont = 0;
        while(1){
            cont += d;
            if(cont > h){
                printf("success on day %d\n", i);
                break;
            }
            cont -= u;
            if(cont < 0){
                printf("failure on day %d\n", i);
                break;
            }
            d -= ls;
            if(d < 0) d = 0;
            ++i;
        }
    }
    return 0;
}
