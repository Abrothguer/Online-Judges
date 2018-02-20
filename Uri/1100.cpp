#include <bits/stdc++.h>

using namespace std;

int bfs(string orig, string dest){
    int dist;
    string s, go;
    //        position, distance
    queue< pair<string, int> > myq;
    myq.push(make_pair(orig, 0));

    while(not myq.empty()){
        s = myq.front().first;
        go = myq.front().first;
        dist = myq.front().second;
        myq.pop();
        //cout << s << " com dist = " << dist << endl;
        //system("pause");
        if(s == dest){
            return dist;
        }
        if(s[1]+2 >= '1' and s[1]+2 <= '8'){
            if(s[0]+1 >= 'a' and s[0]+1 <= 'h') go[0] = s[0]+1, go[1] = s[1]+2, myq.push(make_pair(go,dist+1));
            if(s[0]-1 >= 'a' and s[0]-1 <= 'h') go[0] = s[0]-1, go[1] = s[1]+2, myq.push(make_pair(go,dist+1));
        }
        if(s[1]-2 >= '1' and s[1]-2 <= '8'){
            if(s[0]+1 >= 'a' and s[0]+1 <= 'h') go[0] = s[0]+1, go[1] = s[1]-2, myq.push(make_pair(go,dist+1));
            if(s[0]-1 >= 'a' and s[0]-1 <= 'h') go[0] = s[0]-1, go[1] = s[1]-2, myq.push(make_pair(go,dist+1));
        }
        if(s[1]+1 >= '1' and s[1]+1 <= '8'){
            if(s[0]+2 >= 'a' and s[0]+2 <= 'h') go[0] = s[0]+2, go[1] = s[1]+1, myq.push(make_pair(go,dist+1));
            if(s[0]-2 >= 'a' and s[0]-2 <= 'h') go[0] = s[0]-2, go[1] = s[1]+1, myq.push(make_pair(go,dist+1));
        }
        if(s[1]-1 >= '1' and s[1]-1 <= '8'){
            if(s[0]+2 >= 'a' and s[0]+2 <= 'h') go[0] = s[0]+2, go[1] = s[1]-1, myq.push(make_pair(go,dist+1));
            if(s[0]-2 >= 'a' and s[0]-2 <= 'h') go[0] = s[0]-2, go[1] = s[1]-1, myq.push(make_pair(go,dist+1));
        }
    }
}

int main(){
    string orig, dest;
    ios::sync_with_stdio(false); cin.tie(0);
    while(cin >> orig >> dest){
        cout << "To get from " << orig  << " to " << dest << " takes " << bfs(orig,dest) << " knight moves." << endl;
    }
    return 0;
}