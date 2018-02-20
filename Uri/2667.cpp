#include <bits/stdc++.h>

using namespace std;

int main(){
    int cnt = 0;
    string s;
    cin >> s;
    for(int i=0; i<s.size(); ++i){
        cnt += s[i]-'0';
        cnt %= 3;
    }
    cout << cnt << endl;
    return 0;
}