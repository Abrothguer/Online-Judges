#include <bits/stdc++.h>

using namespace std;

//TEMPO PONTOS

int unboundknap(int n, int t, vector< pair<int,int> > v){
    int vec[t+1];
    //PESO i
    memset(vec,0,sizeof vec);
    for(int i = 0; i <= t; ++i){
        for(int j = 0; j < n; ++j){
            if(v[j].first <= i){
                vec[i] = max(vec[i],vec[i-v[j].first]+v[j].second);
            }
        }
    }
    return vec[t];
}

int main(){
    int n, t, a, b, ins;
    ins = 1;
    while(scanf("%d %d", &n, &t), n, t){
        vector< pair<int,int> >v;
        for(int i = 0; i < n; ++i){
            scanf("%d %d", &a, &b);
            v.push_back(make_pair(a,b));
        }
        printf("Instancia %d\n", ins++);
        printf("%d\n\n", unboundknap(n,t,v));
    }
    return 0;
}
