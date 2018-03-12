#include <bits/stdc++.h>

using namespace std;

int main(){
    int  t, n;
    bool front, back;

    cin >> t;
    while (t--) {
        cin >> n;
        int fingers[n];
        int sheaths[n];

        for (int i = 0; i < n; ++i) {
            cin >> fingers[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> sheaths[i];
        }

        front = true;
        for (int i = 0; i < n; ++i) {
            if (fingers[i] > sheaths[i]) {
                front = false;
                break;
            }
        }

        back = true;
        for (int i = 0; i < n; ++i) {
            if (fingers[i] > sheaths[n - i - 1]) {
                back = false;
                break;
            }
        }

        if (front and back) {
            cout << "both" << endl;
        }
        else if (front) {
            cout << "front" << endl;
        }
        else if (back) {
            cout << "back" << endl;
        }
        else{
            cout << "none" << endl;
        }
    }
    return (0);
}
