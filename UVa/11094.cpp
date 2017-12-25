#include <bits/stdc++.h>
#define MAX 20

using namespace std;

char wmp[MAX][MAX];
char land, water;

int floodfill(int n, int m, int i, int j){
    int aux, ans = 0;
    wmp[i][j] = water;
    //cout << "to em i=" << i << " e j=" << j << endl; 
    
    if(i+1 < n and wmp[i+1][j] == land) ans += floodfill(n, m, i+1, j);
    aux = j+1 == m ? 0 : j+1;
    if(aux < m and wmp[i][aux] == land) ans += floodfill(n, m, i, aux);


    if(i-1 >= 0 and wmp[i-1][j] == land) ans += floodfill(n, m, i-1, j);
    aux = j-1 == -1 ? m-1 : j-1;
    if(aux >= 0 and wmp[i][aux] == land) ans += floodfill(n, m, i, aux);

    return 1+ans;
}

int main(){
    bool asc;
    int n, m, x, y;
    char c1, c2;

    while(cin >> n >> m){
        asc = false;
        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                cin >> wmp[i][j];
                if(not i and not j) c1 = wmp[0][0];
                else if(not asc and wmp[i][j] != c1) c2 = wmp[i][j], asc = true;
            }
        }

        cin >> x >> y;
        if(not asc){
            cout << 0 << endl;
            continue;
        }

        land = wmp[x][y];
        water = land == c1 ? c2 : c1;
        //cout << "land char is " << land << endl;
        floodfill(n, m, x, y);

        int aux, cnt = 0;
        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                if(wmp[i][j] == land){
                    aux = floodfill(n, m, i, j);
                    if(aux > cnt) cnt = aux;
                }
            }
        }

        cout << cnt << endl;
    }
    return 0;
}