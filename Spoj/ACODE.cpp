#include <bits/stdc++.h>

using namespace std;
int                                 a;
map <pair<int, int>, long long int> memo;

long long int solve(string s, int begin, int end){
    //cout << "ON " << begin << ", " << end << endl;

    if (s[begin] == '0') {
        return (0LL);
    }
    if (begin == end or begin == end + 1) {
        return (1LL);
    }
    if (s[begin] == '0' and s[begin + 1] == '0') {
        return (memo[make_pair(begin, end)] = 0LL);
    }
    if (s[begin] >= '3' and s[begin + 1] == '0') {
        return (memo[make_pair(begin, end)] = 0LL);
    }

    if (memo.find(make_pair(begin, end) ) == memo.end() ) {
        memo[make_pair(begin, end)] = solve(s, begin + 1, end);
        if (s[begin] == '1' or(s[begin] == '2' and s[begin + 1] <= '6') ) {
            memo[make_pair(begin, end)] += solve(s, begin + 2, end);
        }
    }

    return (memo[make_pair(begin, end)]);
}

int main(){
    string s;
    while (true) {
        cin >> s;
        if (s == "0") {
            break;
        }
        memo.clear();
        cout << solve(s, 0, s.size() - 1) << endl;
    }
    return (0);
}
