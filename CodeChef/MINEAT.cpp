#include <bits/stdc++.h>

using namespace std;
int n, a;

int bs(int begin, int end, int piles[], int hrs){
    if (begin == end) {
        return (end);
    }
    int middle = (end + begin) / 2;
    int taken  = 0;

    for (int i = 0; i < n and taken <= hrs; ++i) {
        taken += ceil(piles[i] * 1.0 / middle);
    }

    if (taken <= hrs) {
        return (bs(begin, middle, piles, hrs) );
    }
    else{
        return (bs(middle + 1, end, piles, hrs) );
    }
}

int main(){
    int t, hrs;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &n, &hrs);

        int piles[n];
        int maxban;

        maxban = -1;
        for (int i = 0; i < n; ++i) {
            scanf("%d", &piles[i]);
            if (piles[i] > maxban) {
                maxban = piles[i];
            }
        }
        if (hrs == n) {
            printf("%d\n", maxban);
            continue;
        }

        printf("%d\n", bs(1, maxban, piles, hrs) );
    }
    return (0);
}
