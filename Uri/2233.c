#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>


int main(){
    long long unsigned int r, g, b, ans;
    scanf("%llx %llx %llx", &r, &g, &b);
    ans = (r/g)*(r/g) + (r/g)*(r/g)*(g/b)*(g/b);
    ++ans;
    printf("%llx\n", ans);
    return 0;
}
