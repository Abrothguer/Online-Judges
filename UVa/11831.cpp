#include <bits/stdc++.h>

using namespace std;

// D -> TURN RIGHT
// E -> TURN LEFT
// F -> FOWARD

int main(){
    int m, n, s, ipos, jpos, cnt;
    char a, ort;
    string str;
    while(cin >> n >> m >> s, m or s or n){
        char mat[n][m];
        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                cin >> a;
                mat[i][j] = a;
                if(a != '*' and a != '#' and a != '.'){
                    ort = a;
                    ipos = i;
                    jpos = j;
                }
            }
        }
        cin >> str;
        cnt = 0;
        for(int i=0; i<str.size(); ++i){
            //cout << "estou em " << ipos << " " << jpos << " virado para " << ort << endl;
            if(str[i] == 'D'){
                ort == 'N' ? (ort = 'L') : (ort == 'L' ? (ort = 'S') : (ort == 'S' ? (ort = 'O') : (ort = 'N')));
            }
            else if(str[i] == 'E'){
                ort == 'N' ? (ort = 'O') : (ort == 'O' ? (ort = 'S') : (ort == 'S' ? (ort = 'L') : (ort = 'N')));
            }
            else{
                if(ort == 'S' and ipos+1 < n and mat[ipos+1][jpos] != '#'){
                    ipos++;
                    if(mat[ipos][jpos] == '*') ++cnt, mat[ipos][jpos] = '.';
                }
                else if(ort == 'N' and ipos-1 >= 0 and mat[ipos-1][jpos] != '#'){
                    ipos--;
                    if(mat[ipos][jpos] == '*') ++cnt, mat[ipos][jpos] = '.';
                }
                else if(ort == 'O' and jpos-1 >= 0 and mat[ipos][jpos-1] != '#'){
                    jpos--;
                    if(mat[ipos][jpos] == '*') ++cnt, mat[ipos][jpos] = '.';
                }
                else if(ort == 'L' and jpos+1 < m and mat[ipos][jpos+1] != '#'){
                    jpos++;
                    if(mat[ipos][jpos] == '*') ++cnt, mat[ipos][jpos] = '.';
                }                                                            
            }
        }
        cout << cnt << endl;
    }
    return 0;
}