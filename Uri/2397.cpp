#include <bits/stdc++.h>

using namespace std;

int checktri(int a, int b, int c){
    if(abs(a-b) < c && a+b > c && abs(a-c) < b && a+c > b && abs(b-c) < a && b+c > a){
        return 1;
    }
    return 0;
}

void modifytri(int &a, int &b, int &c){
    int aux;
    aux = max(max(a,b),c);
    if(aux == a){
        if(c > b) swap(b,c);
    }
    else if(aux == b){
        if(c > a) swap(a,c);
        b = a;
        a = aux;
    }
    else if(aux == c){
        if(a > b) swap(b,a);
        c = a;
        a = aux;
    }
    return;
}

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(!checktri(a,b,c)){
        printf("n\n");
    }
    else{
        modifytri(a,b,c);
        if((a*a) == ((b*b)+(c*c))){
            printf("r\n");
        }
        else if((a*a) > ((b*b)+(c*c))){
            printf("o\n");
        }
        else{
            printf("a\n");
        }
    }
    return 0;
}
