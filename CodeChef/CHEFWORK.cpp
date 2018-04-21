#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int mint, minw, minwt;

    cin >> n;
    int coins[n];

    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
    }

    mint = minw = minwt = INT_MAX;
    int type;

    for (int i = 0; i < n; ++i) {
        cin >> type;
        if (type == 1 and coins[i] < mint) {
            mint = coins[i];
        }
        else if (type == 2 and coins[i] < minw) {
            minw = coins[i];
        }
        else if (type == 3 and coins[i] < minwt) {
            minwt = coins[i];
        }
    }

    if (minw != INT_MAX and mint != INT_MAX) {
        cout << min(minwt, mint + minw) << endl;
    }
    else{
        cout << minwt << endl;
    }

    return (0);
}
