#include <bits/stdc++.h>

using namespace std;

stack <char> s, aux;

int main(){
    int t, g = 0;
    char p1, p2, p3, p4, a1, a2, a3, a4;
    cin >> t;
    while(t--){
        if(s.empty()){
            s.push('F'); s.push('A'); s.push('C');s.push('E');
        }
        cin.ignore(); cin >> a1;
        cin.ignore(); cin >> a2;
        cin.ignore(); cin >> a3;
        cin.ignore(); cin >> a4;
        p1 = s.top(); s.pop();
        if(p1 != a1){
            s.push(p1); s.push(a1); s.push(a2); s.push(a3); s.push(a4);
        }
        else{
            p2 = s.top(); s.pop();
            if(p2 != a2){
                s.push(p2); s.push(p1); s.push(a1); s.push(a2); s.push(a3); s.push(a4);
            }
            else{
                p3 = s.top(); s.pop();
                if(p3 != a3){
                    s.push(p3); s.push(p2); s.push(p1); s.push(a1); s.push(a2); s.push(a3); s.push(a4);
                }   
                else{
                    p4 = s.top(); s.pop();
                    if(p4 != a4){
                        s.push(p4); s.push(p3); s.push(p2); s.push(p1   ); s.push(a1); s.push(a2); s.push(a3); s.push(a4);
                    }
                    else{
                        ++g;
                    }
                }
            }
        }
        /*cout << "mystack " << g << ":" << endl;
        aux = s;
        while(!aux.empty()){
            cout << " " << aux.top();
            aux.pop();
        }
        cout << endl;*/
    }
    cout << g << endl;
    return 0;
}