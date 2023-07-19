#include <bits/stdc++.h>
using namespace std;
int main(){
    while(1){
        int v, ans = 0;
        char dummy;
        while(scanf("%d%c",&v, &dummy) != EOF){
            ans += v;
            if(dummy == '\n') break;
    }
        if(feof(stdin)) break;
        printf("%d\n", ans);
    }
    return 0;
}