#include <bits/stdc++.h>

using namespace std;

int main(){
    double n, m, a;
    scanf("%lf %lf %lf", &n, &m, &a);
    a = ceil(n/a)*ceil(m/a);
    printf("%.0lf\n", a);
    return 0;
}
