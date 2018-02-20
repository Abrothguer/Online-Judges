#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, dig1, dig2;
    double v;
    bool ac;

    while(scanf("%lf %d %d", &v, &n, &m)){
        if(!v and !n and !m) break;
        ac = false;

        dig1 = n%10000;
        dig2 = m%10000;
        if(dig1 == dig2) ac = true, v *= 3000;

        dig1 = n%1000;
        dig2 = m%1000;
        if(!ac and dig1 == dig2) ac = true, v *= 500;

        dig1 = n%100;
        dig2 = m%100;
        if(!ac and dig1 == dig2) ac = true, v *= 50;

        if(!dig1) dig1 = 100;
        if(!dig2) dig2 = 100;

        if(!ac and ceil(dig1/4.0) == ceil(dig2/4.0)) ac = true, v *= 16;

        if(ac) printf("%.2lf\n", v);
        else printf("0.00\n");

    }
    return 0;
}
