#include <bits/stdc++.h>

using namespace std;

int main(){
    bool v;
    double pl, co, per;
    char c;
    string s;

    cin >> c;
    cin.ignore();
    getline(cin,s);

    co = 0.0;
    pl = 1.0;
    v = 1;
    for(int i=0; i<s.size(); ++i){
        if(s[i] == ' ') v = 1, ++pl;
        else if(s[i] == c && v) v = 0, ++co;
    }
    per = 100*co/pl;
    //cout << co << " " << pl << endl;
    cout << fixed << setprecision(1) << per << endl;
    return 0;
}
