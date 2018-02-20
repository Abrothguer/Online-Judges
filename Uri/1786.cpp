#include <bits/stdc++.h>

using namespace std;

int main(){
    int b1, b2;
    ios::sync_with_stdio(false);cin.tie(false);
    string s;
    while(cin >> s){
        b1 = b2 = 0;
        for(int i = 0; i < s.size(); ++i){
            b1 += (s[i]-'0')*(i+1);
            b2 += (s[i]-'0')*(s.size()-i);
        }
        b1 %= 11;
        b2 %= 11;
        if(b1 == 10) b1 = 0;
        if(b2 == 10) b2 = 0;
        cout << s[0] << s[1] << s[2] << ".";
        cout << s[3] << s[4] << s[5] << ".";
        cout << s[6] << s[7] << s[8] << "-";
        cout << b1 << b2 << endl;
    }
    return 0;
}
