#include <bits/stdc++.h>

using namespace std;

int main(){
    int c = 1;
    string lang;
    while(1){
        cin >> lang;
        if(lang == "#") break;
        printf("Case %d: ", c++);
        if(lang == "HELLO") printf("ENGLISH\n");
        else if(lang == "HOLA") printf("SPANISH\n");
        else if(lang == "HALLO") printf("GERMAN\n");
        else if(lang == "BONJOUR") printf("FRENCH\n");
        else if(lang == "CIAO") printf("ITALIAN\n");
        else if(lang == "ZDRAVSTVUJTE") printf("RUSSIAN\n");
        else printf("UNKNOWN\n");
    }
    return 0;
}
