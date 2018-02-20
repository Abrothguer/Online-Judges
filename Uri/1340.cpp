#include <bits/stdc++.h>

using namespace std;

int main(){
    int pq, qu, st, n, op, x;
    while(cin >> n){
        priority_queue< int >pqueue;
        queue< int > nqueue;
        stack< int > stck;
        pq = qu = st = 1;
        while(n--){
            cin >> op >> x;
            if(op == 1){
                pqueue.push(x);
                nqueue.push(x);
                stck.push(x);
            }
            else{
                if(pqueue.top() != x) pq = 0;
                if(nqueue.front() != x) qu = 0;
                if(stck.top() != x) st = 0;
                pqueue.pop();
                nqueue.pop();
                stck.pop();
            }
        }
        if(pq && !qu && !st) cout << "priority queue" << endl;
        else if(!pq && qu && !st) cout << "queue" << endl;
        else if(!pq && !qu && st) cout << "stack" << endl;
        else if(!pq && !qu && !st) cout << "impossible" << endl;
        else cout << "not sure" << endl;
    }
    return 0;
}
