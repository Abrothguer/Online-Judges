#include <bits/stdc++.h>

using namespace std;

int main(){
    int p, a, r, sum, max;
    string name, per;
    bool prt;
    ios::sync_with_stdio(false);cin.tie(0);

    while(cin >> p >> a >> r, (p || a || r)){
        cin.ignore();
        string svet[p];
        for(int i = 0; i < p; ++i){
            getline(cin, svet[i]);
        }
        max = 0;
        map<string, int> alunos;
        map<string, int> ::iterator it;

        for(int i = 0; i < a; ++i){
            getline(cin, name);

            sum = 0;
            for(int j = 0; j < r; ++j){
                getline(cin, per);

                for(int k = 0; k < p; ++k){
                    if(per == svet[k]){
                        ++sum;
                        break;
                    }
                }
            }
            if(alunos[name] < sum) alunos[name] = sum;
            if(sum > max) max = sum;
        }

        prt = false;
        for(it = alunos.begin(); it != alunos.end(); ++it){
            if(it->second == max){
                if(prt) cout << ", " << it->first;
                else{
                    cout << it->first;
                    prt = true;
                }
            }
        }
        cout << endl;

    }
    return 0;
}
