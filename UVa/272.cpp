#include <bits/stdc++.h>

using namespace std;

int main(){
    bool open;
    string s;
    open = false;
    while(getline(cin, s)){
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == '"'){
                if(open){
                    printf("''");
                    open = false;
                }
                else{
                    printf("``");
                    open = true;
                }
            }
            else{
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
