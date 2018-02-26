#include <bits/stdc++.h>

using namespace std;

int main(){
    int  n, type, value;
    bool qi, si, pi;
    ios::sync_with_stdio(false);
    while (cin >> n) {
        stack <int>         stk;
        queue <int>         qu;
        priority_queue<int> pq;

        pi = si = qi = true;
        for (int i = 0; i < n; ++i) {
            cin >> type >> value;
            if (type == 1) {
                stk.push(value);
                qu.push(value);
                pq.push(value);
            }
            else{
                if (stk.empty() ) {
                    pi = si = qi = false;
                    continue;
                }
                if (pi and value != pq.top() ) {
                    pi = false;
                }
                if (si and value != stk.top() ) {
                    si = false;
                }
                if (qi and value != qu.front() ) {
                    qi = false;
                }
                stk.pop();
                pq.pop();
                qu.pop();
            }
        }

        if (pi and not si and not qi) {
            cout << "priority queue" << endl;
        }
        else if (si and not pi and not qi) {
            cout << "stack" << endl;
        }
        else if (qi and not si and not pi) {
            cout << "queue" << endl;
        }
        else if (not qi and not si and not pi) {
            cout << "impossible" << endl;
        }
        else{
            cout << "not sure" << endl;
        }
    }
    return (0);
}
