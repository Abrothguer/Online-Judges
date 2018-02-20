#include <bits/stdc++.h>

using namespace std;

void printbin(int x){
    int t, l;
    l = log(x)/log(2);
    for(int i=1<<l; i>0; i=i>>1){
        if(x&i) cout << 1;
        else cout << 0;
    }
    cout << " bin" << endl;
}

int main(){
    int n, j=1, x;
    string s, t;
    cin >> n;
    while(n--){
        cin >> s >> t;
        cout << "Case " << j++ << ":" << endl;
        x = 0;
        if(t == "dec"){
            for(int i=s.size()-1; i>=0; --i) x += (s[i]-'0')*round(pow(10,s.size()-1-i));
            printf("%x hex\n", x);
            printbin(x);
        }
        else if(t == "bin"){
            for(int i=0; i<s.size(); ++i) if(s[i] == '1') x += 1 << (s.size()-1-i);
            printf("%d dec\n", x);
            printf("%x hex\n", x); 
        }
        else if(t == "hex"){
            for(int i=s.size()-1; i>=0; --i){
                if(s[i]>='0'and s[i]<='9') x += (s[i]-'0')*round(pow(16,s.size()-1-i));
                else x += (s[i]-'a'+10)*round(pow(16,s.size()-1-i));
            }
            printf("%d dec\n", x);
            printbin(x);
        }
        cout << endl;
    }
    return 0;
}