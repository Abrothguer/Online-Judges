#include <bits/stdc++.h>

using namespace std;

int main(){
    int j;
    string s;
    char r[1000];
    cin >> s;
    j = 0;
    for(int i = 0; i < s.size(); ++i){
        if(tolower(s[i]) == 'a' || tolower(s[i]) == 'o' || tolower(s[i]) == 'y' || tolower(s[i]) == 'e' || tolower(s[i]) == 'u' || tolower(s[i]) == 'i'){
            continue;
        }
        else{
            r[j++] = '.';
            r[j++] = tolower(s[i]);
        }
    }
    r[j] = '\0';
    cout << r << endl;
    return 0;
}
