#include <bits/stdc++.h>

#define MAX    200010

using namespace std;

int find_parent(int parent[], int a){
    if (parent[a] == a) {
        return (a);
    }
    return (parent[a] = find_parent(parent, parent[a]) );
}

int unite(int parent[], int total[], int a, int b){
    int pa, pb;
    pa = find_parent(parent, a);
    pb = find_parent(parent, b);

    if (pa == pb) {
        return (total[pa]);
    }

    parent[pa] = pb;
    total[pb] += total[pa];

    return (total[pb]);
}

int main(){
    int    t, n, index;
    string a, b;
    ios::sync_with_stdio(false);
    cin >> t;
    int parent[MAX];
    int total[MAX];

    while (t--) {
        cin >> n;
        index = 0;
        map <string, int> dict;

        while (n--) {
            cin >> a >> b;
            if (dict.find(a) == dict.end() ) {
                parent[index] = index;
                total[index]  = 1;
                dict[a]       = index++;
            }
            if (dict.find(b) == dict.end() ) {
                parent[index] = index;
                total[index]  = 1;
                dict[b]       = index++;
            }
            cout << unite(parent, total, dict[a], dict[b]) << endl;
        }
    }
    return (0);
}
