#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, sum, ls1, ls2;
    while (cin >> n, n) {
        priority_queue <int, vector <int>, greater<int> > pq;

        for (int i = 0; i < n; ++i) {
            cin >> a;
            pq.push(a);
        }

        sum = 0;

        while (pq.size() != 1) {
            ls1  = pq.top(); pq.pop();
            ls2  = pq.top(); pq.pop();
            sum += ls1 + ls2;
            pq.push(ls1 + ls2);
        }

        cout << sum << endl;
    }
    return (0);
}
