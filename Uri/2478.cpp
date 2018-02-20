#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, i, like, j;
    cin >> n;
    string mat[n][4], nome, presente;
    for(i = 0; i < n; ++i){
        cin >> mat[i][0] >> mat[i][1] >> mat[i][2] >> mat[i][3];
    }
    while(cin >> nome != NULL){
        cin >> presente;
        like = 0;
        for(j = 0; j < n; ++j){
            if(nome == mat[j][0]){
                if(presente == mat[j][1] or presente == mat[j][2] or presente == mat[j][3]){
                    like = 1;
                    break;
                }
            }
        }
        if(like) cout << "Uhul! Seu amigo secreto vai adorar o/\n";
        else cout << "Tente Novamente!\n";
    }
    return 0;
}