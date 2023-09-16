#include <iostream>

int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    int ans = 0, prev = 0, n; char dummy;
    while(scanf("%d%c", &n, &dummy)){
        if(n >= prev) ++ans;
        if(dummy=='\n' || n < prev) break;
        prev = n;
    }
    printf("%d\n", ans);
    return 0;
}