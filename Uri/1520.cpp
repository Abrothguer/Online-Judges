#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x, y, m, l, u;

    while(scanf("%d", &n) != EOF){
        multiset <int> mset;
        multiset <int> :: iterator lower, upper;
        while(n--){
            scanf("%d %d", &x, &y);
            for(int i = x; i <= y; ++i){
                mset.insert(i);
            }
        }
        scanf("%d", &m);
        lower = mset.lower_bound(m);
        upper = mset.upper_bound(m);
        l = distance(mset.begin(), lower);
        u = distance(mset.begin(), upper);
        if(lower != upper) printf("%d found from %d to %d\n", m, l, u-1);
        else printf("%d not found\n", m);
    }
    return 0;
}
