#include <bits/stdc++.h>
#define MAX 30

using namespace std;

vector <char> gp[MAX];
bool seen[MAX];
stack <char> stk;

void gp_connec(vector <string> lt, int beg, int end, int pos){
    int aux = beg;
    char key = '\0';

    if(beg == end || beg > end || end-beg == 1) return;

    for(int i=beg; i<end; ++i){
        if(pos == lt[i].size()){
            aux = i+1;
        }

        else if(key == '\0') key = lt[i][pos];

        else if(key != lt[i][pos]){
            //printf("chave diferente %c e %c -> aux = %d, end = %d, pos = %d\n", key, lt[i][pos], aux, i, pos+1);
            gp_connec(lt, aux, i, pos+1);
            aux = i;
            gp[ key - 'A'].push_back( lt[i][pos] );
            key = lt[i][pos];
        }
    }

    gp_connec(lt, aux, end, pos+1);
}

void print_adj(){
    for(int i=0; i<MAX; ++i){
        if(gp[i].size()){
            printf("%d - %c: ", i, 'A'+i);

            for(int j=0; j<gp[i].size(); ++j){

                cout << gp[i][j] << " ";
            }
            cout << endl;
        }
    }
    return;
}

void topsort(int a){
    seen[a] = true;

    for(int i=0; i<gp[a].size(); ++i){
        if(not seen[ gp[a][i] - 'A']) topsort(gp[a][i]-'A');
    }

    stk.push('A'+a);
}

int main(){
    int aux;
    string s;

    for(int i=0; i<MAX; ++i){
        seen[i] = false;
    }

    while(cin >> s){
        //cout << "entrei com {" << s << "}" << endl;
        vector <string> lt;
        lt.push_back(s);
        while(cin >> s, s != "#"){
            lt.push_back(s);
        }

        gp_connec(lt, 0, lt.size(), 0);
        //print_adj();

        //cout << "comecando topsort!";
        for(int i=0; i<MAX; ++i){
            if(not seen[i] and gp[i].size()){
                topsort(i);
            }
        }

        //SE SO TIVER UM.
        if(stk.empty()) cout << lt[0][0];

        //cout << "printando stack";
        while(not stk.empty()){
            aux = stk.top() - 'A';
            cout << stk.top();
            stk.pop();

            seen[aux] = false;
            gp[aux].clear();
        }
        cout << endl;
        //cout << endl << "fim esperando eof" << endl << endl;    
    }
    return 0;
}