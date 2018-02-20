#include <bits/stdc++.h>

using namespace std;

int seen[10010];

int invert(int x){
    int rev, aux;
    rev = 0;
    while(x != 0){
        aux = x%10;
        rev = rev*10 + aux;
        x /= 10;
    }
    return rev;
}

int bfs(int og, int dt){
    if(og == dt) return 0;
    int t, td, d = 0, x1, x2;
    memset(seen,0,sizeof seen);
    queue < pair<int,int> > qu;
    qu.push(make_pair(og,d));
    seen[og]++;
    while(true){
        t = qu.front().first;
        td = qu.front().second;
        qu.pop();
        x1 = t + 1;
        x2 = invert(t);
        //cout << "x1 = " << x1 << " e x2 = " << x2 << endl;
        //system("pause");
        if(x1 == dt || x2 == dt) return td+1;
        if(x1 <= 10000 && !seen[x1]) qu.push(make_pair(x1,td+1)), seen[x1]++;
        if(x2 <= 10000 && !seen[x2]) qu.push(make_pair(x2,td+1)), seen[x2]++;
    }
}

int main(){
    int t, og, dt;
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> t;
    while(t--){
        cin >> og >> dt;
        cout << bfs(og,dt) << endl;
    }
    return 0;
}
