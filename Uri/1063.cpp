#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, ct, i, j;
    char in[30], out[30];
    ios::sync_with_stdio(false);cin.tie(0);

    while(cin >> n, n){
        stack <char> rail;
        cin.ignore();

        for(i=0; i<n; ++i) cin >> in[i];
        for(i=0; i<n; ++i) cin >> out[i];
    
        i = j = 0;
        while(true){
            if(rail.empty() and i<n){
                rail.push(in[i++]);
                cout << "I";
            }
            else if(rail.top() == out[j]){
                rail.pop();
                j++;
                cout << "R";
                if(rail.empty() and i==n) break;
            }
            else if(i == n and rail.top() != out[j]){
                cout << " Impossible";
                break;
            }
            else{
                rail.push(in[i++]);
                cout << "I";
            }
        }
        cout << endl;

    }
    return 0;
}