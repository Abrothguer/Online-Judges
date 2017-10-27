#include <bits/stdc++.h>

using namespace std;

int main(){
    char r1, r2, r3;
    long long unsigned min, ac, ac1, ac2, ac3;
    long long unsigned vet[9];
    ios::sync_with_stdio(false); cin.tie(0);
    while(cin >> vet[0]){
        for(int i=1; i<9; ++i){
            cin >> vet[i];
        }
        ac1 = vet[0]+vet[1]+vet[2];
        ac2 = vet[3]+vet[4]+vet[5];
        ac3 = vet[6]+vet[7]+vet[8];
        min = 1<<31;
        //cout << min << endl;
        for(int i=0; i<3; ++i){
            for(int j=3; j<6; ++j){
                if(j%3 == i%3) continue;
                for(int k=6; k<9; ++k){
                    if(k%3 == i%3 or k%3 == j%3) continue;
                    ac = (ac1-vet[i])+(ac2-vet[j])+(ac3-vet[k]);
                    if(ac < min){
                        min = ac;
                        i == 0 ? (r1 = 'B') : (i == 1 ? (r1 = 'G') : (r1 = 'C'));
                        j == 3 ? (r2 = 'B') : (j == 4 ? (r2 = 'G') : (r2 = 'C'));
                        k == 6 ? (r3 = 'B') : (k == 7 ? (r3 = 'G') : (r3 = 'C'));
                    }
                    else if(ac == min){
                        char r1a, r2a, r3a;
                        i == 0 ? (r1a = 'B') : (i == 1 ? (r1a = 'G') : (r1a = 'C'));
                        j == 3 ? (r2a = 'B') : (j == 4 ? (r2a = 'G') : (r2a = 'C'));
                        k == 6 ? (r3a = 'B') : (k == 7 ? (r3a = 'G') : (r3a = 'C'));
                        if(r1a < r1 or (r1a == r1 and r2a < r2)){
                            i == 0 ? (r1 = 'B') : (i == 1 ? (r1 = 'G') : (r1 = 'C'));
                            j == 3 ? (r2 = 'B') : (j == 4 ? (r2 = 'G') : (r2 = 'C'));
                            k == 6 ? (r3 = 'B') : (k == 7 ? (r3 = 'G') : (r3 = 'C'));
                        }
                    }
                }
            }
        }

        cout << r1 << r2 << r3 << " " << min << endl;

    }
    return 0;
}