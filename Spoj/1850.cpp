#include <bits/stdc++.h>

using namespace std;

#define MAX 1000000

bool prim[MAX+1] = {false};
vector<int> pr;

void crivo(){
    for(int i = 2; i < MAX; ++i){
        if(!prim[i]){
            pr.push_back(i);
            for(int j = i*2; j < MAX; j += i){
                prim[j] = true;
            }
        }
    }
    return;
}

int check(int n){
    int sr, p = 0;
    sr = n/2;
    for(int i = 0; ;++i){
        if(pr[i] > sr) break;
        else if(n%pr[i] == 0){
            //printf("%d divide %d\n", pr[i], n);
            ++p;
        }
    }
    return p;
}

int main(){
    crivo();
    int n, p;
    while(scanf("%d", &n), n){
        if(prim[n]) printf("%d : %d\n", n, check(n));
        else printf("%d : 1\n", n);
    }
    return 0;
}
