#include <bits/stdc++.h>

using namespace std;

int arr[100010], fenwick[100010]={0};

void updateBIT(int node, int value, int n){
    int next = node;
    while(next <= n){
        fenwick[next] += value;
        next = next+(next&(-next));
    }
}

int sumBIT(int node){
    int sum = 0, part = node;
    while(part != 0){
        sum += fenwick[part];
        part = part-(part&(-part));
    }
    return sum;
}

int main(){
    int n, v;
    char y;
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
        updateBIT(i+1,arr[i],n);
    }
    cin.ignore();
    while(cin >> y >> v){
        if(y == 'a'){
            updateBIT(v,-arr[v-1],n);
        }
        else{
            cout << sumBIT(v)-arr[v-1] << endl;
        }
        cin.ignore();
    }
    return 0;
}