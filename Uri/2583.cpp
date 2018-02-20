#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    string des, ch;
    vector<string> adq;
    cin >> n;
    while(n--){
        cin >> m;
        for(int i=0; i<m; ++i){
            cin >> des >> ch;
            if(ch == "chirrin" and find(adq.begin(), adq.end(), des) == adq.end()){
                adq.push_back(des);
            }
            else if(ch == "chirrion"){
                vector<string> :: iterator it = find(adq.begin(), adq.end(), des);
                if(it != adq.end()){
                    adq.erase(it);
                }
            }
        }
        cout << "TOTAL" << endl;
        sort(adq.begin(), adq.end());
        for(int i=0; i<adq.size(); ++i){
            cout << adq[i] << endl;
        }
        adq.clear();
    }
    return 0;
}