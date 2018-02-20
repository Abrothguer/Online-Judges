#include <bits/stdc++.h>

using namespace std;

typedef struct team{
    int insc;
    int ptos;
    int favr;
    int agst;
}Team;

bool cmp(const Team &a, const Team &b){
    if(a.ptos != b.ptos) return a.ptos > b.ptos;
    else{
        double av1, av2;
        if(a.agst) av1 = a.favr*1.0/a.agst;
        else av1 = a.favr*1.0;
        if(b.agst) av2 = b.favr*1.0/b.agst;
        else av2 = b.favr*1.0;

        if(av1 != av2) return av1 > av2;
        else{
            if(a.favr != b.favr) return a.favr > b.favr;
            else{
                return a.insc > b.insc;
            }
        }
    }
}

int main(){
    int n, stp, m = 1;
    int t1, t2, pt1, pt2;
    while(scanf("%d", &n), n){
        if(m>1) printf("\n");
        stp = (n*(n-1))/2;
        Team ts[n];
        for(int i = 0; i < n; ++i){
            ts[i].insc = i+1;
            ts[i].favr = 0;
            ts[i].agst = 0;
            ts[i].ptos = 0;
        }
        while(stp--){
            scanf("%d %d %d %d", &t1, &pt1, &t2, &pt2);
            ts[t1-1].favr += pt1;
            ts[t1-1].agst += pt2;
            ts[t2-1].favr += pt2;
            ts[t2-1].agst += pt1;
            if(pt1 > pt2) ts[t1-1].ptos += 2, ts[t2-1].ptos += 1;
            else ts[t1-1].ptos += 1, ts[t2-1].ptos += 2;
        }
        printf("Instancia %d\n", m++);
        sort(ts, ts+n, cmp);
        for(int i = 0; i < n; ++i){
            if(i) printf(" %d", ts[i].insc);
            else printf("%d", ts[i].insc);
        }
        printf("\n");
    }
    return 0;
}
