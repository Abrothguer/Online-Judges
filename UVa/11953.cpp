#include <bits/stdc++.h>
#define MAX 100

using namespace std;

char board[MAX][MAX];

int floodfill(int n, int i, int j){
    int ans = 0; 

    if(i+1 < n and (board[i+1][j] == 'x' or board[i+1][j] == '@')){
        
        ans = floodfill(n, i+1, j);
        if(not ans) board[i][j] == 'x' ? ans = 1 : ans = 0; 
        board[i+1][j] = 'v';
        return ans;
    }

    else if(j+1 < n and (board[i][j+1] == 'x' or board[i][j+1] == '@')){
        
        ans = floodfill(n, i, j+1);
        if(not ans) board[i][j] == 'x' ? ans = 1 : ans = 0; 
        board[i][j+1] = 'v';
        return ans;
    }

    if(board[i][j] == 'x') return 1;
    else return 0;
}

int main(){
    int t, c, n;
    
    cin >> t;
    c = 1;
    while(t--){
        cin >> n;

        for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j){
                cin >> board[i][j];
            }
            cin.ignore();
        }

        int counter = 0;

        for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j){
                
                if(board[i][j] == 'x' || board[i][j] == '@'){
                    if(floodfill(n, i, j)) {
                        counter++;
                        //cout << "increment on " << i << " and " << j << endl;
                    }
                }
                board[i][j] = 'v';
            }
        }

        cout << "Case " << c++ << ": " << counter << endl;
    }
    return 0;
}