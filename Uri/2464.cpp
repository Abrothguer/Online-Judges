#include <bits/stdc++.h>

using namespace std;

int main(){
    string cod, msg;
    cin >> cod;
    cin >> msg;
    for(int i=0; i<msg.size(); ++i){
        cout << cod[msg[i]-'a'];
    }
    cout << endl;
    return 0;
}