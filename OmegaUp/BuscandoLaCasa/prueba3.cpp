#include <bits/stdc++.h>
#define ALL(x) x.begin(), x.end()
using namespace std;
int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    int m, n, size; scanf("%d %d", &m, &n);
    size = m * n;
    vector<int> houses(size);
    for(int i = 0; i < size; ++i)
        scanf("%d", &houses[i]);
    int h = *max_element(ALL(houses));

    for(int i = 0; i < size; ++i)
        if(houses[i] == h)
            printf("%d %d\n", (i / n) + 1, (i % n) + 1);
    return 0;
}