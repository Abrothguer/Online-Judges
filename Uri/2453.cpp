#include <bits/stdc++.h>

using namespace std;

int main(){
    int p;
    string s;
    getline(cin, s);
    for(int i=0,p=0; i<s.size(); ++i){
        if(p){
            cout << s[i];
            p = 0;
        }
        else{
            if(s[i] == 'p'){
                p = 1;
            }
            else cout << s[i];
        }
    }
    cout << endl;
    return 0;
}