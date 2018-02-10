#include <bits/stdc++.h>
#define MAX 30

using namespace std;

vector <int> graph[MAX];
bool seen[MAX];
int indegree[MAX];
vector <int> added;

void topsort(string s){
    //cout << "ARRIVED WITH " << s << endl;
    if(s.size() == added.size()) cout << s << endl;

    for(int i=0; i<added.size(); ++i){

        int num = added[i];
        if(!seen[num] and indegree[num]<=0){

            seen[num] = true;

            for(int j=0; j<graph[num].size(); ++j){
                indegree[ graph[num][j] ]--;
            }

            string t = "a";
            t[0] += num;
            topsort(s+t);

            for(int j=0; j<graph[num].size(); ++j){
                indegree[ graph[num][j] ]++;
            }

            seen[num] = false;
        }
    }

}


int main(){
    string s;
    int beg = true;

    while(getline(cin, s)){
        if(beg) beg = false;
        else cout << endl;
        added.clear();

        for(int i=0; i<s.size(); i+=2){
            added.push_back(s[i] - 'a');
            graph[ s[i] - 'a' ].clear();
            seen[ s[i] - 'a' ] = false;
            indegree[ s[i] - 'a' ] = 0;
            //cout << "i = " << s[i]-'a' << endl;
        }
        sort(added.begin(), added.end());

        getline(cin, s);
        for(int i=0; i<s.size(); i+=4){

            graph[ s[i]-'a' ].push_back( s[i+2]-'a' );
            indegree[ s[i+2]-'a' ]++;

            //cout << " pair is " << s[i]-'a' << " and " << s[i+2]-'a' << endl;
        }
        string g="";
        topsort(g);
    }
}
