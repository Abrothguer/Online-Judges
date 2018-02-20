#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string s;
    ios::sync_with_stdio(false);cin.tie(0);
    while(cin >> s){
        stack <char> stk;
        n = 0;
        for(int i=0; i<s.size(); ++i){
            if(stk.empty()) stk.push(s[i]);
            else if(stk.top() == 'B' and s[i] == 'S'){
                stk.pop();
                ++n;
            } 
            else if(stk.top() == 'S' and s[i] == 'B'){
                stk.pop();
                ++n;
            }
            else if(stk.top() == 'F' and s[i] == 'C'){
                stk.pop();
                ++n;
            }
            else if(stk.top() == 'C' and s[i] == 'F'){
                stk.pop();
                ++n;
            }
            else stk.push(s[i]);
        }
        cout << n << endl;
    }
    return 0;
}