#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int cmb;
    int n;
    char c;
    string s;
    cin >> n;
    while(n--){
        cin >> s;
        cmb = 1LL;
        for(int i=0; i<s.size(); ++i){
            c = tolower(s[i]);
            if(c=='a' or c=='e' or c=='i' or c=='o' or c=='s'){
                cmb *= 3;
            }
            else cmb *= 2;
        }
        cout << cmb << endl;
    }
    return 0;
}