#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    
    set<int> plants;
    
    for (int i = 0; i < N; i++) {
        int plant;
        scanf("%d", &plant);
        plants.insert(plant);
    }
    
    printf("%d\n", plants.size());
    
    return 0;
}
