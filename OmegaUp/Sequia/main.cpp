#include <iostream>

int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    int n, c, l, ans = 0; scanf("%d %d", &n, &c);
    while(n--){
        scanf("%d", &l);
        c -= l;
        ++ans;
        if(c <= 0) break;
    }
    printf("%d\n", ans);
    return 0;
}