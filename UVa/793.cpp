#include <bits/stdc++.h>

using namespace std;

int find_parent(int parent[], int a){
    if (parent[a] == a) {
        return (a);
    }
    return (parent[a] = find_parent(parent, parent[a]) );
}

void unite(int parent[], int a, int b){
    int pa, pb;

    pa = find_parent(parent, a);
    pb = find_parent(parent, b);

    if (pa == pb) {
        return;
    }

    parent[pa] = pb;
}

int main(){
    int    t, n, a, b;
    char   c;
    string s;
    ios::sync_with_stdio(false);
    cin >> t;

    while (t--) {
        cin >> n;
        cin.ignore();
        int parent[n + 1];

        for (int i = 0; i <= n; ++i) {
            parent[i] = i;
        }

        int ok, notok;
        ok = notok = 0;

        while (getline(cin, s), s != "") {
            stringstream ss;
            ss << s;
            ss >> c;
            ss >> a;
            ss >> b;

            //cout << " H = " << c << " a = " << a << " b = " << b << endl;

            if (c == 'q') {
                find_parent(parent, a) == find_parent(parent, b) ? ++ok : ++notok;
            }
            else{
                unite(parent, a, b);
            }
        }

        cout << ok << "," << notok << endl;
        if (t) {
            cout << endl;
        }
    }
    return (0);
}
