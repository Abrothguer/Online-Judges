#include <bits/stdc++.h>

using namespace std;

struct pv{
    int x, y;
    pv(){
        x = y = 0;
    }
    pv(int a, int b): x(a), y(b) {}
};

double dist(pv a, pv b){
    return hypot(a.x-b.x, a.y-b.y);
}

vector<pv> pts;

int main(){
    int n, a, b;
    double lst, d;
    scanf("%d", &n);
    while(n--){
        scanf("%d %d", &a, &b);
        pts.push_back(pv(a,b));
    }
    lst = dist(pts[0],pts[1]);
    for(int i = 0; i < pts.size()-1; ++i){
        for(int j = i+1; j < pts.size(); ++j){
            d = dist(pts[i],pts[j]);
            if(d < lst){
                lst = d;
            }
        }
    }
    printf("%.3lf\n", lst);
    return 0;
}
