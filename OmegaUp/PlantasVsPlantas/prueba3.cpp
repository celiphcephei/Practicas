#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; scanf("%d", &N);
    list<int> plants;
    for (int i = 0; i < N; i++) {
        int plant; scanf("%d", &plant);
        auto I = plants.begin();
        while (I != plants.end() && *I <= plant) ++I;
        if (I != plants.end()) plants.erase(I); 
        plants.push_back(plant);
    }
    printf("%d\n", plants.size());
    return 0;
}