#include <bits/stdc++.h>

using namespace std;

int main(){
    int    t, count;
    string tree;
    ios::sync_with_stdio(false);
    cin >> t;
    cin.ignore();
    getline(cin, tree);

    while (t--) {
        map <string, int> dict;
        count = 0;

        while (getline(cin, tree) and tree != "") {
            ++count;
            ++dict[tree];
        }

        for (map<string, int> :: iterator it = dict.begin(); it != dict.end(); ++it) {
            cout << it->first << " " << fixed << setprecision(4) << it->second * 100.0 / count << endl;
        }
        if (t) {
            cout << endl;
        }
    }
    return (0);
}
