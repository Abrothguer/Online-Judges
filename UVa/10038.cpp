#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b;
    bool jj;
    while(cin >> n){
        int vr[n-1];
        jj = true;
        for(int i = 0; i < n-1; ++i) vr[i] = 0;
        for(int i = 0; i < n; ++i){
            scanf("%d", &a);
            if(i != 0){
                if(abs(a-b) > n-1) jj = false;
                else vr[abs(a-b)-1]++;
            }
            b = a;
        }
        if(jj){
            for(int i = 0; i < n-1; ++i){
                if(!vr[i]){
                    jj = false;
                    break;
                }
            }
        }
        if(jj) printf("Jolly\n");
        else printf("Not jolly\n");
    }
    return 0;
}
