#include <bits/stdc++.h>

using namespace std;

struct term{
    vector< pair<string,int> > v;
    int pos;
    int max;
};

int findpair(vector< pair<string,int> > v, string s){
    for(int i=0; i<v.size(); ++i){
        if(s == v[i].first) return i;
    }
    return -1;
}

int main(){
    int n = 0, p, val;
    bool spc = false;
    char c;
    string s, all;
    stringstream ss;
    map<char, term> mp;
    map<char, term> :: iterator it;
    ios::sync_with_stdio(false);cin.tie();

    while(cin >> s, s != "."){
        if(!(all.size())) all += s;
        else all += " " + s;

        if(s.size() > 2){
            if(mp[s[0]].v.size() == 0) n++;
            p = findpair(mp[s[0]].v, s);
            if(p >= 0){
                mp[s[0]].v[p].second += 1;
            }
            else{
                mp[s[0]].v.push_back(make_pair(s,1));
                p = mp[s[0]].v.size() - 1;
            }
            val = (mp[s[0]].v[p].first.size()-2)*mp[s[0]].v[p].second;
            if(val > mp[s[0]].max){
                mp[s[0]].max = val;
                mp[s[0]].pos = p+1;
            }
        }

        if(cin.get() == '\n'){
            ss << all;
            spc = false;
            while(ss >> s){
                p = mp[s[0]].pos - 1;
                if(p >= 0 and mp[s[0]].v[p].first == s){
                    if(spc) cout << " " << s[0] << ".";
                    else{
                        cout << s[0] << ".";
                        spc = true;
                    }
                }
                else{
                    if(spc) cout << " " << s;
                    else{
                        cout << s;
                        spc = true;
                    }
                }
            }
            cout << endl << n << endl;
            for(it=mp.begin(); it!=mp.end(); ++it){
                p = it->second.pos - 1;
                if(p >= 0){
                    cout << it->second.v[p].first[0] << ". = " << it->second.v[p].first << endl;
                }
            }
            ss.clear();
            mp.clear();
            all.clear();
            n = 0;
        }
    }
    return 0;
}