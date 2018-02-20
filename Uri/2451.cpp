#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, ac, max;
    char c;
    cin >> n;
    char mat[n][n];
    cin.ignore();
    ac = max = 0;
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            cin >> c;
            mat[i][j] = c;
        }
        cin.ignore();
    }
    for(int i=0; i<n; ++i){
        if(i%2 == 0){
            for(int j=0; j<n; ++j){
                if(mat[i][j] == 'o') ++ac;
                else if(mat[i][j] == 'A'){
                    if(ac > max) max = ac;
                    ac = 0;
                }
            }
        }
        else{
            for(int j=n-1; j>=0; --j){
                if(mat[i][j] == 'o') ++ac;
                else if(mat[i][j] == 'A'){
                    if(ac > max) max = ac;
                    ac = 0;
                }
            }
        }
    }
    if(ac > max) max = ac;
    cout << max << endl;
    return 0;
}