#include <bits/stdc++.h>
#define INF 10101010

using namespace std;

int mergesort(vector<int> &v){
    if(v.size() == 1) return 0;

    int swaps, j, k;

    vector <int> aux1, aux2;
    for(int i = 0; i < v.size()/2; ++i){
        aux1.push_back(v[i]);
    }
    for(int i = v.size()/2; i < v.size(); ++i){
        aux2.push_back(v[i]);
    }

    swaps = j = k = 0;
    swaps += mergesort(aux1);
    swaps += mergesort(aux2);

    aux1.push_back(INF); //Adicionar inf aumenta 1 no size!!!
    aux2.push_back(INF);

    for(int i = 0; i < v.size(); ++i){

        if(aux1[k] < aux2[j]){
            v[i] = aux1[k++];
        }
        else{
            v[i] = aux2[j++];
            swaps += aux1.size() - k - 1;
        }

    }
    return swaps;
}

int main(){
    int n, t, a, swaps;
    ios::sync_with_stdio(false); cin.tie(0);
    while(cin >> n, n){
        vector<int> v;
        for(int i = 0; i < n; ++i){
            cin >> a;
            v.push_back(a);
        }
        swaps = mergesort(v);
        if(swaps%2 == 0) cout << "Carlos" << endl;
        else cout << "Marcelo" << endl;
    }
    return 0;
}
