#include <iostream>
int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    int m, n, h, prev = 0, x, y; scanf("%d %d", &m, &n);
    for(int i = 1; i <= m; ++i){
        for(int j = 1; j <= n; ++j){
            scanf("%d", &h);
            if(h > prev){
                prev = h;
                x = i;
                y = j;
            }
        }
    }
    if(!prev) printf("0 0\n");
    else{
        printf("%d %d\n", x, y);
    }
    return 0;
}