#include <iostream>

int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    int f, days = 0; scanf("%d", &f);
    while((f - 1) % 11 != 0){
        ++days;
        f *= 2;
    }
    printf("%d %d\n", days, f);
    return 0;
}