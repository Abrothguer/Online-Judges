#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, spc, zer;
    char c;
    string s;
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> n;
    cin.ignore();
    while(n--){
        getline(cin,s);
        spc = zer = 0;
        for(int i=0; i<=s.size(); ++i){
            if(spc){
                if(s[i]==' '){
                    ++spc;
                    continue;
                }
                else if(i==s.size() || s[i]!=' '){
                    if(spc==1) cout << " ";
                    else if(spc==2) cout << "  ";
                    else{
                        while(spc > 0){
                            if(spc < 255) c = spc;
                            else c = 255; 
                            cout << "$" << c;
                            spc -= 255;
                        }
                    }
                    spc = 0;
                    if(s[i]=='0')++zer;
                    else if(i != s.size()) cout << s[i];
                }
            }
            else if(zer){
                if(s[i]=='0'){
                    ++zer;
                    continue;
                }
                else if(i==s.size() || s[i] != '0'){
                    if(zer==1) cout << "0";
                    else if(zer==2) cout << "00";
                    else{
                        while(zer > 0){
                            if(zer < 255) c = zer;
                            else c = 255;
                            cout << "#" << c;
                            zer -= 255;
                        }
                    }
                    zer = 0;
                    if(s[i]==' ')++spc;
                    else if(i != s.size()) cout << s[i];
                }
            }
            else{
                if(i != s.size() and s[i] == ' ')++spc;
                else if(i != s.size() and s[i] == '0')++zer;
                else if(i != s.size()){
                    cout << s[i];
                }
            }
        }
        cout << endl;
    }
    return 0;
}