#include <bits/stdc++.h>

using namespace std;

int main(){
    int    t, n;
    double price, quantity, discount, total, add, withdiscount;
    cin >> t;
    while (t--) {
        total = 0.0;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> price >> quantity >> discount;
            add          = price * discount / 100.0;
            withdiscount = (price + add) - ( (price + add) * discount / 100.0);

            //cout << "p = " << price << " withdist = " << withdiscount << endl;

            total += (price - withdiscount) * quantity;
        }
        printf("%.6lf\n", total);
    }
    return (0);
}
