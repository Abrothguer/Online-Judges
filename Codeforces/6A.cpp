#include <bits/stdc++.h>

using namespace std;

int checktri(int a, int b, int c){
    if(abs(a-b) < c && a+b > c && abs(a-c) < b && a+c > b && abs(b-c) < a && b+c > a){
        return 1; // TRIANGLE
    }
    else if(a+b == c || a+c == b || b+c == a){
        return -1; // DEGENERATE
    }
    return 0;
}

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int t1, t2, t3, t4;
    t1 = checktri(a,b,c);
    t2 = checktri(a,b,d);
    t3 = checktri(a,c,d);
    t4 = checktri(b,c,d);
    if(t1 == 1 || t2 == 1 || t3 == 1 || t4 == 1){
        printf("TRIANGLE\n");
    }
    else if(t1 == -1 || t2 == -1 || t3 == -1 || t4 == -1){
        printf("SEGMENT\n");
    }
    else{
        printf("IMPOSSIBLE\n");
    }
    return 0;
}
