#include <bits/stdc++.h>
using namespace std;
int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    int m, n, size, x, y, max = 0, indice; scanf("%d %d", &m, &n);
    size = m * n;
    vector<int> houses(size);
    for(int i = 0; i < size; ++i){
        scanf("%d", &houses[i]);
        if(max < houses[i]){
            max = houses[i];
            indice = i;
        }
    }
    if(max < 1)
        printf("0 0\n");
    else {
        for(int i = 0; i < size;++i){
        if(houses[i] == max) printf("%d %d\n", (i / n)+ 1, (i % n) + 1);
    }
    }
    return 0;
}