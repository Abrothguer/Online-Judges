#include <bits/stdc++.h>

using namespace std;

#define SPD 50.0

//STRUCT POINT/VECTOR
struct pv{
    int x, y;
    pv(){
        x = y = 0;
    }
    pv(int a, int b): x(a), y(b){}
};

double dist(pv a, pv b){
    return hypot(a.x-b.x, a.y-b.y);
}

vector<pv> sig;

int main(){
    int n, k, a, b;
    double dt = 0.0;
    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; ++i){
        scanf("%d %d", &a, &b);
        sig.push_back(pv(a,b));
    }
    for(int i = 0; i < sig.size()-1; ++i){
        dt += dist(sig[i], sig[i+1]);
    }
    printf("%.9lf\n", dt*k/SPD);
    return 0;
}
